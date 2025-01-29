# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Launch_Files_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Launch_Files_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Launch_Files_FOUND FALSE)
  elseif(NOT Launch_Files_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Launch_Files_FOUND FALSE)
  endif()
  return()
endif()
set(_Launch_Files_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Launch_Files_FIND_QUIETLY)
  message(STATUS "Found Launch_Files: 0.0.0 (${Launch_Files_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Launch_Files' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Launch_Files_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Launch_Files_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Launch_Files_DIR}/${_extra}")
endforeach()
