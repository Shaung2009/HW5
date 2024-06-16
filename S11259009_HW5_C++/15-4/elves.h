//This is the head file of elves.cpp.
//This is the interface of elves.h.
#ifndef ELVES_H
#define ELVES_H

#include"creature.h"

class Elves : public Creature {
public:
	Elves();
	Elves(int newStrength, int newHit);

	int getDamage() const override;
	string getSpecies() const override;
};

#endif