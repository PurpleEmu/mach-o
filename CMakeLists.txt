cmake_minimum_required( VERSION 3.8 )
set( CMAKE_VERBOSE_MAKEFILE ON )
set( CMAKE_DISABLE_SOURCE_CHANGES ON )
set( CMAKE_DISABLE_IN_SOURCE_BUILD ON )
project( macholdr )
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/src/headers/macho.h")
   message(STATUS "found macho header")
else()
   message(STATUS "unable to find macho header!")
   message(STATUS "pulling...")
   file(DOWNLOAD
      https://raw.githubusercontent.com/zhuowei/qemu/master/include/macho_loader.h
      ${CMAKE_CURRENT_SOURCE_DIR}/src/headers/macho.h
   )
endif()
set(SOURCES
   "src/main.c"
)
add_executable( macholdr ${SOURCES} )
target_include_directories( macholdr PRIVATE "src/include")
