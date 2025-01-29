# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Aruco_Detect_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Aruco_Detect_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Aruco_Detect_FOUND FALSE)
  elseif(NOT Aruco_Detect_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Aruco_Detect_FOUND FALSE)
  endif()
  return()
endif()
set(_Aruco_Detect_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Aruco_Detect_FIND_QUIETLY)
  message(STATUS "Found Aruco_Detect: 0.0.0 (${Aruco_Detect_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Aruco_Detect' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Aruco_Detect_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Aruco_Detect_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Aruco_Detect_DIR}/${_extra}")
endforeach()
