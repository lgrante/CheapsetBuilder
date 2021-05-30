//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_COMPONENTOUTPUTSBUILDER_H
#define CHEAPSETBUILDER_COMPONENTOUTPUTSBUILDER_H


#include "ComponentLinksBuilder.h"
#include "../../../component/include/interface/IComponent.h"


class ComponentOutputsBuilder : ComponentLinksBuilder {
    ComponentOutputsBuilder(const ComponentLinksBuilder &prevBuilder);

    ComponentOutputsBuilder setOutput(const std::shared_ptr<IComponent> &component, const std::string &outputLabel, const std::string &alias);

    const std::shared_ptr<IComponent> &create();
};


#endif //CHEAPSETBUILDER_COMPONENTOUTPUTSBUILDER_H
