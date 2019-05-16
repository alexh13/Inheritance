/*
Alex Hughes
CS 110B
5/15/19
Professor Dave
Assignment 14

Late Submission. I'd fail the class without it, even with 50%
*/


#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Demon.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include <iostream>

using namespace std;
using namespace cs_creature;

int main() {

    srand(time(0));



    human h1;

    elf e1;

    cyberdemon c1;

    balrog b1;



    human h(20, 30);

    elf e(40, 50);

    cyberdemon c(60, 70);

    balrog b(80, 90);





    cout << "default human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;

    cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;

    cout << "default cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;

    cout << "default balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;

    cout << "non-default human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;

    cout << "non-default elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;

    cout << "non-default cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;

    cout << "non-default balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;

    cout << endl << endl;

    cout << "Examples of " << h.getSpecies() << " damage: " << endl;

    for (int i = 0; i < 10; i++){
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }

    cout << endl;

    cout << "Examples of " << e.getSpecies() << " damage: " << endl;

    for (int i = 0; i < 10; i++){
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }

    cout << endl;

    cout << "Examples of " << c.getSpecies() << " damage: " << endl;

    for (int i = 0; i < 10; i++){
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }

    cout << endl;

    cout << "Examples of " << b.getSpecies() << " damage: " << endl;

    for (int i = 0; i < 10; i++){
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }

    cout << endl;
}



/*
OUTPUT:
/Users/alexhughes/CLionProjects/a14/cmake-build-debug/a14
default human strength/hitpoints: 10/10
default elf strength/hitpoints: 10/10
default cyberdemon strength/hitpoints: 10/10
default balrog strength/hitpoints: 10/10
non-default human strength/hitpoints: 20/30
non-default elf strength/hitpoints: 40/50
non-default cyberdemon strength/hitpoints: 60/70
non-default balrog strength/hitpoints: 80/90


Examples of Human damage:
The Human attacks for 1 points!
 Total damage = 1

The Human attacks for 1 points!
 Total damage = 1

The Human attacks for 15 points!
 Total damage = 15

The Human attacks for 10 points!
 Total damage = 10

The Human attacks for 3 points!
 Total damage = 3

The Human attacks for 10 points!
 Total damage = 10

The Human attacks for 8 points!
 Total damage = 8

The Human attacks for 15 points!
 Total damage = 15

The Human attacks for 6 points!
 Total damage = 6

The Human attacks for 13 points!
 Total damage = 13


Examples of Elf damage:
The Elf attacks for 31 points!
 Total damage = 31

The Elf attacks for 19 points!
 Total damage = 19

The Elf attacks for 28 points!
Magical attack inflicts 28 additional damage points!
 Total damage = 56

The Elf attacks for 6 points!
Magical attack inflicts 6 additional damage points!
 Total damage = 12

The Elf attacks for 28 points!
 Total damage = 28

The Elf attacks for 31 points!
 Total damage = 31

The Elf attacks for 17 points!
 Total damage = 17

The Elf attacks for 37 points!
 Total damage = 37

The Elf attacks for 4 points!
Magical attack inflicts 4 additional damage points!
 Total damage = 8

The Elf attacks for 26 points!
Magical attack inflicts 26 additional damage points!
 Total damage = 52


Examples of Cyberdemon damage:
The Cyberdemon attacks for 14 points!
 Total damage = 14

The Cyberdemon attacks for 26 points!
 Total damage = 26

The Cyberdemon attacks for 34 points!
 Total damage = 34

The Cyberdemon attacks for 35 points!
 Total damage = 35

The Cyberdemon attacks for 37 points!
Demonic attack inflicts 50 additional damage points!
 Total damage = 87

The Cyberdemon attacks for 57 points!
 Total damage = 57

The Cyberdemon attacks for 47 points!
 Total damage = 47

The Cyberdemon attacks for 32 points!
Demonic attack inflicts 50 additional damage points!
 Total damage = 82

The Cyberdemon attacks for 24 points!
 Total damage = 24

The Cyberdemon attacks for 38 points!
 Total damage = 38


Examples of Balrog damage:
The balrog Balrog attacks for 80 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 75 additional damage points!
 Total damage = 205

The balrog Balrog attacks for 14 points!
Balrog speed attack inflicts 31 additional damage points!
 Total damage = 45

The balrog Balrog attacks for 63 points!
Balrog speed attack inflicts 12 additional damage points!
 Total damage = 75

The balrog Balrog attacks for 9 points!
Balrog speed attack inflicts 3 additional damage points!
 Total damage = 12

The balrog Balrog attacks for 57 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 70 additional damage points!
 Total damage = 177

The balrog Balrog attacks for 23 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 2 additional damage points!
 Total damage = 75

The balrog Balrog attacks for 4 points!
Balrog speed attack inflicts 77 additional damage points!
 Total damage = 81

The balrog Balrog attacks for 12 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 27 additional damage points!
 Total damage = 89

The balrog Balrog attacks for 35 points!
Balrog speed attack inflicts 68 additional damage points!
 Total damage = 103

The balrog Balrog attacks for 61 points!
Balrog speed attack inflicts 24 additional damage points!
 Total damage = 85



Process finished with exit code 0

*/