//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_ICOMPONENTBUILDER_H
#define CHEAPSETBUILDER_ICOMPONENTBUILDER_H


#include <string>
#include <memory>

#include "IComponent.h"


class ComponentBuilder;
typedef std::pair<const std::shared_ptr<IComponent> &, const std::string &> componentPin_t;

class IComponentBuilder {
public:
    virtual ComponentBuilder &setName(const std::string &name) = 0;

    virtual ComponentBuilder &setInput(const componentPin_t &inputPin, const std::string &name) = 0;

    virtual ComponentBuilder &setOutput(const componentPin_t &outputPin, const std::string &name) = 0;

    virtual ComponentBuilder &link(const componentPin_t &outputPin, const componentPin_t &inputPin) = 0;

    virtual const std::shared_ptr<IComponent> &build() = 0;
};


#endif //CHEAPSETBUILDER_ICOMPONENTBUILDER_H
