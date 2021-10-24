cmake_minimum_required(VERSION 3.5)

project(export_url_c LANGUAGES C)

include_directories(include)

file(GLOB SOURCES src/*.c)
file(GLOB HEADERS include/*.h)

add_executable(export_url_c ${SOURCES} ${HEADERS})
