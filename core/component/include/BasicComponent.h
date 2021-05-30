//
// Created by Louis Grante on 30/05/2021.
//

#ifndef CHEAPSETBUILDER_BASICCOMPONENT_H
#define CHEAPSETBUILDER_BASICCOMPONENT_H

#include "Component.h"

class BasicComponent : public Component {
public:
    BasicComponent() = default;

    void compute() final;
};


#endif //CHEAPSETBUILDER_BASICCOMPONENT_H
