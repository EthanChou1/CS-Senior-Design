# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Search_Protocol_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Search_Protocol_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Search_Protocol_FOUND FALSE)
  elseif(NOT Search_Protocol_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Search_Protocol_FOUND FALSE)
  endif()
  return()
endif()
set(_Search_Protocol_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Search_Protocol_FIND_QUIETLY)
  message(STATUS "Found Search_Protocol: 0.0.0 (${Search_Protocol_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Search_Protocol' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Search_Protocol_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Search_Protocol_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Search_Protocol_DIR}/${_extra}")
endforeach()
