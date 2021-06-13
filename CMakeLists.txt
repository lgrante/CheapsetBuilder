cmake_minimum_required(VERSION 3.17)
project(CheapsetBuilder)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE cheapset_builder)

set(SOURCE_FILES
        ./core/builder/src/ComponentBuilder.cpp
        ./core/component/src/BasicComponent.cpp
        ./core/component/src/BuiltComponent.cpp
        )

set(HEADER_FILES
        ./main.cpp
        ./core/builder/include/interface/IComponentBuilder.h
        ./core/builder/include/ComponentBuilder.h
        ./core/component/include/interface/IComponent.h
        ./core/component/include/BasicComponent.h
        ./core/component/include/BuiltComponent.h
        ./core/component/include/Component.h
        )

add_executable(${EXECUTABLE} ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(${EXECUTABLE} PRIVATE ./core/builder/include/interface/)
target_include_directories(${EXECUTABLE} PRIVATE ./core/builder/include/)
target_include_directories(${EXECUTABLE} PRIVATE ./core/component/include/)
target_include_directories(${EXECUTABLE} PRIVATE ./core/component/include/interface/)

include_directories(./core/builder/include/interface/)
include_directories(./core/builder/include/)
include_directories(./core/component/include/)
include_directories(./core/component/include/interface/)

