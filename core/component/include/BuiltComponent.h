//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_BUILTCOMPONENT_H
#define CHEAPSETBUILDER_BUILTCOMPONENT_H

#include "Component.h"

class BuiltComponent : public Component {
public:
    BuiltComponent() = default;

    void compute() final;
};


#endif //CHEAPSETBUILDER_BUILTCOMPONENT_H
