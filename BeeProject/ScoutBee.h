#pragma once
#include "Bee.h"
class ScoutBee : public Bee
{
private:
	double distance; // in meters
public:
	ScoutBee() : Bee(), distance(1) {}

	ScoutBee(int life_in_days) : Bee(life_in_days), distance(1) {}

	ScoutBee(double distance) : Bee(), distance(distance) {}

	ScoutBee(int life_in_days, double distance)
		: Bee(life_in_days), distance(distance) {}


	double getDistance();
	void setDistance(double distance);

	double the_amount_of_honey_consumed() override;
	string getInfo() override;

	string getName() override;
};

