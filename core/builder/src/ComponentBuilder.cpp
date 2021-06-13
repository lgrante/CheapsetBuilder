//
// Created by Louis Grante on 13/06/2021.
//

#include "ComponentBuilder.h"

ComponentBuilder::ComponentBuilder(const std::string &name)
{
}

ComponentBuilder &ComponentBuilder::setName(const std::string &name)
{
    return <#*this#>;
}

ComponentBuilder &ComponentBuilder::setInput(const componentPin_t &inputPin, const std::string &name)
{
    return <#*this#>;
}

ComponentBuilder &ComponentBuilder::setOutput(const componentPin_t &outputPin, const std::string &name)
{
    return <#*this#>;
}

ComponentBuilder &ComponentBuilder::link(const componentPin_t &outputPin, const componentPin_t &inputPin)
{
    return <#*this#>;
}

const std::shared_ptr<IComponent> &ComponentBuilder::build()
{
}
