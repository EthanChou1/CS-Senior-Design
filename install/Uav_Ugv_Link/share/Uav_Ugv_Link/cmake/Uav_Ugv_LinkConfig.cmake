# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Uav_Ugv_Link_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Uav_Ugv_Link_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Uav_Ugv_Link_FOUND FALSE)
  elseif(NOT Uav_Ugv_Link_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Uav_Ugv_Link_FOUND FALSE)
  endif()
  return()
endif()
set(_Uav_Ugv_Link_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Uav_Ugv_Link_FIND_QUIETLY)
  message(STATUS "Found Uav_Ugv_Link: 0.0.0 (${Uav_Ugv_Link_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Uav_Ugv_Link' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Uav_Ugv_Link_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Uav_Ugv_Link_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Uav_Ugv_Link_DIR}/${_extra}")
endforeach()
