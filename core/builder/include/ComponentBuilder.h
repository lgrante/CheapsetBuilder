//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_COMPONENTBUILDER_H
#define CHEAPSETBUILDER_COMPONENTBUILDER_H


#include <string>

#include "./builders/ComponentInputsBuilder.h"

class ComponentBuilder {
public:
    ComponentBuilder();

    ComponentInputsBuilder setName(const std::string &name);
};


#endif //CHEAPSETBUILDER_COMPONENTBUILDER_H
