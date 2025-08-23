cmake_minimum_required(VERSION 3.10)
project(RayTracer)

set(CMAKE_CXX_STANDARD 17)

add_executable(ray_tracer main.cc)

add_custom_target(
  clean_all
  COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_clean.cmake
)

add_custom_target(
  open_image
  COMMAND ${CMAKE_CURRENT_BINARY_DIR}/ray_tracer > image.ppm
  COMMAND xdg-open image.ppm
)