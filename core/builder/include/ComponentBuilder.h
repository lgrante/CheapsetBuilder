//
// Created by Louis Grante on 13/06/2021.
//

#ifndef CHEAPSETBUILDER_COMPONENTBUILDER_H
#define CHEAPSETBUILDER_COMPONENTBUILDER_H

#include "IComponentBuilder.h"


class ComponentBuilder : IComponentBuilder {
public:
    ComponentBuilder(const std::string &name);

    ComponentBuilder &setName(const std::string &name) final;

    ComponentBuilder &setInput(const componentPin_t &inputPin, const std::string &name) final;

    ComponentBuilder &setOutput(const componentPin_t &outputPin, const std::string &name) final;

    ComponentBuilder &link(const componentPin_t &outputPin, const componentPin_t &inputPin) final;

    const std::shared_ptr<IComponent> &build() final;
};


#endif //CHEAPSETBUILDER_COMPONENTBUILDER_H
