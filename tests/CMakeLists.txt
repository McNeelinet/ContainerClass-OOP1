cmake_minimum_required(VERSION 3.5)

project(set_test LANGUAGES CXX)

enable_testing()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Test)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(set_test tst_set_test.cpp ../node.h
            ../Iterator.h ../Iterator.cpp
            ../set.h ../set.cpp)
add_test(NAME set_test COMMAND set_test)

target_link_libraries(set_test PRIVATE Qt${QT_VERSION_MAJOR}::Test)

