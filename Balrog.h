//
// Created by Alex Hughes on 2019-05-15.
//

#ifndef A14_BALROG_H
#define A14_BALROG_H

#include "Demon.h"
#include <iostream>

namespace cs_creature

{
    class balrog : public demon
    {

    public:
        balrog();
        balrog(int newStrength, int newHitpoints);
        std::string getSpecies() const;
        int getDamage() const;

    };

}


#endif //A14_BALROG_H
