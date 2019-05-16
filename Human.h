//
// Created by Alex Hughes on 2019-05-15.
//

#ifndef A14_HUMAN_H
#define A14_HUMAN_H

#include "Creature.h"
using namespace std;

namespace cs_creature
{
    class human : public creature
    {
    public:
        human();
        human(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}

#endif //A14_HUMAN_H
