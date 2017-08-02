cmake_minimum_required (VERSION 3.2)
project(w32it)

set(LIB_TYPE STATIC)
option(W32SHARED "Build W32It libraries shared." ON)

if(${W32SHARED})
	add_definitions(-DW32SHARED)
	set(LIB_TYPE SHARED)
endif()

file(GLOB SOURCES src/*.cpp)
include_directories(include)

add_library(${PROJECT_NAME} ${LIB_TYPE} ${SOURCES})
