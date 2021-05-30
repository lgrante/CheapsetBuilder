//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_COMPONENTINPUTSBUILDER_H
#define CHEAPSETBUILDER_COMPONENTINPUTSBUILDER_H


#include <memory>

#include "../ComponentBuilder.h"
#include "ComponentLinksBuilder.h"
#include "../../../component/include/interface/IComponent.h"

class ComponentInputsBuilder : public ComponentBuilder {
public:
    ComponentInputsBuilder(const ComponentBuilder &previousBuilder);

    ComponenLinksBuilder setInput(const std::shared_ptr<IComponent> &component, const std::string &inputLabel, const std::string &alias);
};


#endif //CHEAPSETBUILDER_COMPONENTINPUTSBUILDER_H
