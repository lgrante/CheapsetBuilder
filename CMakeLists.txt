cmake_minimum_required(VERSION 3.17)
project(CheapsetBuilder)

set(CMAKE_CXX_STANDARD 17)

add_executable(CheapsetBuilder main.cpp core/component/include/BasicComponent.h core/component/src/BuiltComponent.cpp core/component/include/BuiltComponent.h core/component/src/BasicComponent.cpp core/component/include/BasicComponent.h core/component/include/Component.h core/component/include/interface/IComponent.h core/builder/src/builders/ComponentInputsBuilder.cpp core/builder/include/builders/ComponentInputsBuilder.h core/builder/src/builders/ComponentLinksBuilder.cpp core/builder/include/builders/ComponentLinksBuilder.h core/builder/src/builders/ComponentOutputsBuilder.cpp core/builder/include/builders/ComponentOutputsBuilder.h core/builder/src/ComponentBuilder.cpp core/builder/include/ComponentBuilder.h)