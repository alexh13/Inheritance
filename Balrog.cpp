//
// Created by Alex Hughes on 2019-05-15.
//

#include "Balrog.h"
#include <iostream>

using namespace std;
namespace cs_creature

{
    balrog::balrog()
    {
        setStrength(10);
        setHitpoints(10);
    }

    balrog::balrog(int newStrength, int newHitpoints)

    {
        setStrength(newStrength);
        setHitpoints(newHitpoints);
    }

    string balrog::getSpecies() const

    { return "Balrog"; }
    int balrog::getDamage() const

    {
        cout << "The balrog " << getSpecies();
        int damage = demon::getDamage();
        int damage2 = (rand() % getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage += damage2;
        return damage;
    }
}

