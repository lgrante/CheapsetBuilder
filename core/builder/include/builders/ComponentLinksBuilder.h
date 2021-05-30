//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_COMPONENTLINKSBUILDER_H
#define CHEAPSETBUILDER_COMPONENTLINKSBUILDER_H


#include "ComponentInputsBuilder.h"
#include "ComponentOutputsBuilder.h"
#include "../../../component/include/interface/IComponent.h"

class ComponentLinksBuilder : public ComponentInputsBuilder {
public:
    ComponentLinksBuilder(const ComponentInputsBuilder &previousBuilder);

    ComponentOutputsBuilder link(const std::shared_ptr<IComponent> &fstComponent, const std::string &outputLabel,
                                 const std::shared_ptr<IComponent> &sndComponent, const std::string &inputLabel);
};


#endif //CHEAPSETBUILDER_COMPONENTLINKSBUILDER_H
