#pragma once
#include <iostream>
#include <string>

using namespace std;

//The amount of honey consumed will be counted in kilograms

class Bee
{
protected:
	int life_in_days; 
	double honey_consumption = 0.003;
public:
	Bee() : life_in_days(100) {}
	Bee(int life_in_days) : life_in_days(life_in_days) {}

	int getLifeInDays();
	void setLifeInDays(int life_in_days);

	double getHoneyConsumption();

	virtual double the_amount_of_honey_consumed() {
		return honey_consumption;
	}

	virtual string getName() {
		return "Bee";
	}

	virtual string getInfo() {
		string msg = "Life in days - ";
		msg += to_string(life_in_days);
		msg += ";\nHoney consumption - ";
		return msg;
	}
};

