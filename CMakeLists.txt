cmake_minimum_required(VERSION 3.16)
project(steam-key-checker CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(steamkeychecker
    src/main.cpp
    src/checker.cpp
    src/proxies.cpp
    src/hits.cpp
)

target_include_directories(steamkeychecker PRIVATE include)

if(WIN32)
    target_link_libraries(steamkeychecker PRIVATE userenv)
endif()
