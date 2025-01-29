# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Offboard_Control_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Offboard_Control_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Offboard_Control_FOUND FALSE)
  elseif(NOT Offboard_Control_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Offboard_Control_FOUND FALSE)
  endif()
  return()
endif()
set(_Offboard_Control_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Offboard_Control_FIND_QUIETLY)
  message(STATUS "Found Offboard_Control: 0.0.0 (${Offboard_Control_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Offboard_Control' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Offboard_Control_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Offboard_Control_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Offboard_Control_DIR}/${_extra}")
endforeach()
