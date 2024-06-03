#pragma once
#include "Bee.h"
class Drone : public Bee
{
private:
	string size; // (small, average, large)

public:
	Drone() : Bee(), size("average") {}
	Drone(int life_in_days) : Bee(life_in_days), size("average") {}
	Drone(string size) : Bee(), size(size) {}
	Drone(int life_in_days, string size) : Bee(life_in_days), size(size) {}

	string getSize();
	void setSize(string size);

	double the_amount_of_honey_consumed() override;
	string getInfo() override;
};

