cmake_minimum_required(VERSION 3.25)
project(test)

set(CMAKE_CXX_STANDARD 20)

# Recursively include all the headers
# (just for IDEs, not actually used by CMake)
file(GLOB_RECURSE HEADERS include/*.h)

# I really don't like putting all the sources all here, but it'll do for now ig
set(SOURCES
      main.cpp
      myobject.cpp
        )

# Add some settings for pocketpy
set(PK_USE_BOX2D OFF CACHE BOOL "Don't compile box2D")
set(PK_BUILD_STATIC_LIB ON CACHE BOOL "Compile the static library for pocketpy")
add_subdirectory(pocketpy)

include_directories(pocketpy/include)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} pocketpy)
