//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_ICOMPONENT_H
#define CHEAPSETBUILDER_ICOMPONENT_H

#include <string>

class IComponent {
public:
    enum Tristate {
        TRUE,
        FALSE,
        UNDEFINED
    };

    virtual ~IComponent() = 0;

    virtual void setInput(const std::string &inputLabel, const bool &value) = 0;

    virtual IComponent::Tristate getPin(const std::string &pinLabel) = 0;

    virtual void compute() = 0;
};


#endif //CHEAPSETBUILDER_ICOMPONENT_H
