
cmake_minimum_required(VERSION 3.5)

project(mytest VERSION 1.1.3 DESCRIPTION "mytest description")

add_executable(mytest a.c main.c)

add_library(tlib SHARED a.c )

set_target_properties(tlib PROPERTIES PUBLIC_HEADER "a.h")
set_target_properties(tlib PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(tlib PROPERTIES SOVERSION 1)
message("PROJECT ${PROJECT_VERSION}" )

target_include_directories(tlib
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  PUBLIC $<INSTALL_INTERFACE:include>
)

install(TARGETS mytest EXPORT mytest DESTINATION bin
  COMPONENT runtime  )


install(TARGETS tlib DESTINATION lib
  COMPONENT development  
  PUBLIC_HEADER DESTINATION include 
)



