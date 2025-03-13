import serial
import time
import argparse

def print_hex(label, data):
    """Print data in hexadecimal format."""
    print(f"{label} ({len(data)} bytes): " + " ".join(f"{b:02X}" for b in data))

CRC16_TAB = [0] * 256
POLY = 0x1021

def generate_crc16_table():
    """Generate the CRC16 lookup table."""
    global CRC16_TAB
    for i in range(256):
        crc = i << 8
        for _ in range(8):
            if crc & 0x8000:
                crc = (crc << 1) ^ POLY
            else:
                crc <<= 1
        CRC16_TAB[i] = crc & 0xFFFF

def calculate_crc16(data: bytes, crc_init: int = 0x0000) -> int:
    """Calculate CRC16 using a lookup table."""
    crc = crc_init
    for byte in data:
        temp = (crc >> 8) & 0xFF
        oldcrc16 = CRC16_TAB[byte ^ temp]
        crc = ((crc << 8) ^ oldcrc16) & 0xFFFF
    return crc

def build_gimbal_rotation_packet(yaw=0, pitch=0):
    """Build a packet specifically for gimbal rotation (cmd_id 0x0E)."""
    cmd_id = 0x0E  # gimbal rotation command ID
    packet = bytes([0x55, 0x66, 0x01, 0x02, 0x00, 0x00, 0x00, cmd_id, yaw & 0xFF, pitch & 0xFF])
    crc = calculate_crc16(packet)
    packet += crc.to_bytes(2, 'little')
    return packet

def build_heartbeat_packet():
    """Build a heartbeat packet (cmd_id 0x00). Send first. Necessary to send commands"""
    cmd_id = 0x00  # heartbeat command ID
    packet = bytes([0x55, 0x66, 0x01, 0x02, 0x00, 0x00, 0x00, cmd_id, 0x00, 0x00])
    crc = calculate_crc16(packet)
    packet += crc.to_bytes(2, 'little')
    return packet

def print_help():
    """Print a more detailed help message explaining the command usage."""
    help_text = """
GIMBAL CONTROL SCRIPT
=====================

Script to control a gimbal's yaw and pitch rotation.

USAGE:
    python gimbal_control.py [OPTIONS]

OPTIONS:
    --port PORT      Serial port to connect to (default: /dev/ttyUSB0)
                     Examples: COM3 (Windows), /dev/ttyUSB0 (Linux)
    
    --baud RATE      Baud rate for serial connection (default: 115200)
                     Common values: 9600, 115200, 230400, 460800
    
    --yaw VALUE      Yaw rotation value (0-255, default: 0)
                     Higher values rotate further clockwise
                     
    --pitch VALUE    Pitch rotation value (0-255, default: 0)
                     Higher values rotate further upward
    
    --help           Display help message

EXAMPLES:
    python gimbal_control.py --yaw 100 --pitch 50
    python gimbal_control.py --port COM3 --baud 230400 --yaw 75 --pitch 25
    """
    print(help_text)

def main():
    parser = argparse.ArgumentParser(
        description='Control gimbal yaw and pitch rotation using command ID 0x0E.',
        formatter_class=argparse.RawTextHelpFormatter,
        add_help=False  # made custom help
    )
    parser.add_argument('--port', type=str, default='/dev/ttyUSB0', 
                        help='Serial port name (default: /dev/ttyUSB0)')
    parser.add_argument('--baud', type=int, default=115200, 
                        help='Baud rate (default: 115200)')
    parser.add_argument('--yaw', type=int, default=0, 
                        help='Yaw rotation value (0-255, default: 0)')
    parser.add_argument('--pitch', type=int, default=0, 
                        help='Pitch rotation value (0-255, default: 0)')
    parser.add_argument('--help', action='store_true',
                        help='Display help message')
    
    args = parser.parse_args()
    
    if args.help:
        print_help()
        return
    if not 0 <= args.yaw <= 255:
        print(f"yaw value must be between 0 and 255, got {args.yaw}")
        return
    if not 0 <= args.pitch <= 255:
        print(f"pitch value must be between 0 and 255, got {args.pitch}")
        return
    generate_crc16_table()
    print(f"Opening {args.port} at {args.baud} baud...")
    try:
        ser = serial.Serial(args.port, args.baud, timeout=0.5)
    except serial.SerialException as e:
        print(f"Error opening {args.port}: {e}")
        return
    
    print("Sending Heartbeat...")
    heartbeat = build_heartbeat_packet()
    print_hex("Heartbeat", heartbeat)
    ser.write(heartbeat)
    ser.flush()
    time.sleep(0.2)
    
    print(f"Sending Gimbal Yaw: {args.yaw} Pitch: {args.pitch}")
    gimbal_rot = build_gimbal_rotation_packet(args.yaw, args.pitch)
    print_hex("Gimbal Rotation", gimbal_rot)
    ser.write(gimbal_rot)
    ser.flush()
    
    time.sleep(0.5)
    resp = ser.read(64)
    if resp:
        print_hex("Received", resp)
    else:
        print("No Response")
    
    ser.close()
    print("Done.")

if __name__ == "__main__":
    main()
