//
// Created by Alex Hughes on 2019-05-15.
//

#ifndef A14_CYBERDEMON_H
#define A14_CYBERDEMON_H

#include "Demon.h"
#include <iostream>

namespace cs_creature

{
    class cyberdemon : public demon
    {

    public:
        cyberdemon();

        cyberdemon(int newStrength, int newHitpoints);

        std::string getSpecies() const;

        int getDamage() const;
    };
}


#endif //A14_CYBERDEMON_H
