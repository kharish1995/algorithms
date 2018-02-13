project(algorithms)
cmake_minimum_required(VERSION 2.8)
add_definitions("-std=c++0x")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_library(${PROJECT_NAME} SHARED
	${CMAKE_CURRENT_SOURCE_DIR}/src/data_structure/array.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/data_structure/linked_list.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/data_structure/binary_tree.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/sorting/sort.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dp/fibo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/dp/lcs.cpp
	)

install(DIRECTORY src/include/ DESTINATION include
	FILES_MATCHING PATTERN "*.h")
install(TARGETS algorithms
	LIBRARY DESTINATION lib)
	
add_executable(linked_list ${CMAKE_CURRENT_SOURCE_DIR}/src/data_structure/linked_list_test.cpp)
add_executable(dp ${CMAKE_CURRENT_SOURCE_DIR}/src/dp/test.cpp)
#add_executable(sort ${CMAKE_CURRENT_SOURCE_DIR}/src/data_structure/binary_tree_test.cpp)
add_executable(sort ${CMAKE_CURRENT_SOURCE_DIR}/src/sorting/sort_test.cpp)
target_link_libraries(sort ${PROJECT_NAME})
target_link_libraries(linked_list ${PROJECT_NAME})


