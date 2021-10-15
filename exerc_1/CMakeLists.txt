cmake_minimum_required(VERSION 3.10)

# set the project name
project(cmake_minimal)

# add the executable
add_executable(sort sort.c)
add_executable(sort-o sort-o.c)
target_link_libraries(sort)
target_link_libraries(sort-o)
