cmake_minimum_required(VERSION 3.22)

set(MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set (SOURCE
        main.cpp
        )
set (INCLUDE
        ${MY_DIRECTORY}/registry.h
        ${MY_DIRECTORY}/
        )

add_executable(data_register ${SOURCE} ${INCLUDE})

target_include_directories(data_register PUBLIC ${MY_DIRECTORY})