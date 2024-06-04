#pragma once
#include "Bee.h"
class WorkerBee : public Bee
{
private:
	string type_of_collect = "super mega hyper worker";
	double distance; // in meters
public:
	WorkerBee() : Bee(), distance(1) {}

	WorkerBee(int life_in_days) : Bee(life_in_days), distance(1) {}

	WorkerBee(double distance) : Bee(), distance(distance) {}

	WorkerBee(int life_in_days, double distance) 
		: Bee(life_in_days), distance(distance) {}

	string getTypeOfCollect();
	void setTypeOfCollect(string type_of_collect);

	double getDistance();
	void setDistance(double distance);

	double the_amount_of_honey_consumed() override;
	string getInfo() override;

	string getName() override;
};

