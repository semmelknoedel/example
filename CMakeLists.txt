cmake_minimum_required (VERSION 2.8)
project(Masterarbeit)
cmake_policy(SET CMP0004 OLD)

#set c++ 11, flags for gcov 
list(APPEND CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS} -g -fprofile-arcs -ftest-coverage")

#find boost components
find_package(Boost COMPONENTS signals program_options REQUIRED)


#system headers
include_directories(${Boost_INCLUDE_DIRS})
#project headers
include_directories(include)

#set header and source files
file(GLOB_RECURSE INCLUDES
         "include/*.h"
     ) #headers in include


file(GLOB_RECURSE SOURCES
	 "src/*.cpp"
     ) 

set(ALL_NEEDED ${INCLUDES} ${SOURCES})

#create executables
add_executable(music_tape ${ALL_NEEDED})
#target_link_libraries (serverapp ${ALL_LIBS})

	
