cmake_minimum_required(VERSION 2.8)
project(swiftwrappingc)
add_library(swiftwrappingc swiftwrappingc.c)
set_target_properties(swiftwrappingc PROPERTIES LINKER_LANGUAGE "C")

install(TARGETS swiftwrappingc DESTINATION lib)
install(FILES swiftwrappingc.h DESTINATION include)
