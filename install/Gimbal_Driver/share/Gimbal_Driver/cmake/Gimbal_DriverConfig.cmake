# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Gimbal_Driver_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Gimbal_Driver_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Gimbal_Driver_FOUND FALSE)
  elseif(NOT Gimbal_Driver_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Gimbal_Driver_FOUND FALSE)
  endif()
  return()
endif()
set(_Gimbal_Driver_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Gimbal_Driver_FIND_QUIETLY)
  message(STATUS "Found Gimbal_Driver: 0.0.0 (${Gimbal_Driver_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Gimbal_Driver' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Gimbal_Driver_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Gimbal_Driver_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Gimbal_Driver_DIR}/${_extra}")
endforeach()
