cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_localize_SRC CONFIGURE_DEPENDS *.cpp)
add_library(rnoh_localize SHARED ${rnoh_localize_SRC})
target_include_directories(rnoh_localize PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(rnoh_localize PUBLIC rnoh)