cmake_minimum_required(VERSION 3.0.2)
project(test_opencv)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_BUILD_TYPE Debug)

find_package(OpenCV REQUIRED)

## ----- Test Matrices Concatenation ----- ##
add_executable(test_mat_concatenation
  src/test_mat_concatenation.cpp
)

target_include_directories(test_mat_concatenation PUBLIC
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(test_mat_concatenation
  ${OpenCV_LIBRARIES}
)
## --------------------------------------- ##

## ----- Test Circular Shift ----- ##
add_executable(test_circular_shift
  src/test_circular_shift.cpp
)

target_include_directories(test_circular_shift PUBLIC
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(test_circular_shift
  ${OpenCV_LIBRARIES}
)
## --------------------------------------- ##

## ----- Test Cross Correlation ----- ##
add_executable(test_cross_correlation
  src/test_cross_correlation.cpp
)

target_include_directories(test_cross_correlation PUBLIC
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(test_cross_correlation
  ${OpenCV_LIBRARIES}
)
## --------------------------------------- ##
