//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_COMPONENT_H
#define CHEAPSETBUILDER_COMPONENT_H

#include "./interface/IComponent.h"

class Component : public IComponent {
public:
    void setInput(const std::string &inputLabel, const bool &value) final;

    IComponent::Tristate getPin(const std::string &pinLabel) final;

    virtual void compute();
};


#endif //CHEAPSETBUILDER_COMPONENT_H
