//
// Created by Alex Hughes on 2019-05-15.
//

#ifndef A14_ELF_H
#define A14_ELF_H

#include "Creature.h"
#include <iostream>

namespace cs_creature
{
    class elf : public creature
    {
    public:
        elf();
        elf(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;
    };
}


#endif //A14_ELF_H
