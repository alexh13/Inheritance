//
// Created by Alex Hughes on 2019-05-15.
//

#ifndef A14_CREATURE_H
#define A14_CREATURE_H

#include <iostream>
namespace cs_creature

{
    class creature
    {
    private:
        int strength;
        int hitpoints;

    public:
        creature();
        creature(int newStrength, int newHitpoints);
        std::string getSpecies() const;

        int getDamage() const;
        int getStrength() const;
        int getHitpoints() const;

        void setStrength(int newStrength);
        void setHitpoints(int newHitpoints);
    };
}

#endif //A14_CREATURE_H
