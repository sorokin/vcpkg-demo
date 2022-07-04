cmake_minimum_required(VERSION 3.23)
project(vcpkg-demo)

find_package(assimp CONFIG REQUIRED)
find_package(Boost 1.79 REQUIRED COMPONENTS nowide stacktrace_windbg thread)
find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)

add_executable(vcpkg-demo
    main.cpp)

target_link_libraries(vcpkg-demo
    PRIVATE
    assimp::assimp
    Boost::boost
    Boost::nowide
    Boost::stacktrace_windbg
    Boost::thread
    glad::glad
    glfw
    glm::glm)
