cmake_minimum_required( VERSION 3.8 )
set( CMAKE_VERBOSE_MAKEFILE ON )
set( CMAKE_DISABLE_SOURCE_CHANGES ON )
set( CMAKE_DISABLE_IN_SOURCE_BUILD ON )
project( macholdr )
set(SOURCES
   "src/main.c"
)
add_executable( macholdr ${SOURCES} )
target_include_directories( macholdr PRIVATE "src/include")
