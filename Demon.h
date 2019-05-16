//
// Created by Alex Hughes on 2019-05-15.
//

#ifndef A14_DEMON_H
#define A14_DEMON_H

#include "Creature.h"
#include <iostream>

namespace cs_creature

{
    class demon : public creature
    {
    public:
        demon();

        demon(int newStrength, int newHitpoints);

        std::string getSpecies() const;

        int getDamage() const;
    };
}


#endif //A14_DEMON_H
