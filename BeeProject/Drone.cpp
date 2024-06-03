#include "Drone.h"

string Drone::getSize() {
	return size;
}
void Drone::setSize(string size) {
	if (size == "small" || size == "average" || size == "large") {
		this->size = size;
	}
}

double Drone::the_amount_of_honey_consumed() {
	double weight = 0;
	if (size == "small") {
		weight = 0.000085;
	}
	else if (size == "average") {
		weight = 0.000165;
	}
	else if (size == "large") {
		weight = 0.000240;
	}

	double honey_consumption = Bee::the_amount_of_honey_consumed()
		* weight * 5000;
	return honey_consumption;
}

string Drone::getInfo() {
	string msg = "Drone:"
		+ Bee::getInfo()
		+ to_string(the_amount_of_honey_consumed());
	msg += "\nSize - " + size;
	
	return msg;
}