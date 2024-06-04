#include "ScoutBee.h"


double ScoutBee::getDistance() {
	return distance;
}
void ScoutBee::setDistance(double distance) {
	if (distance >= 0) {
		this->distance = distance;
	}
}

double ScoutBee::the_amount_of_honey_consumed() {
	return honey_consumption + honey_consumption * distance / 100;
}
string ScoutBee::getInfo() {
	string msg = "Scout Bee:\n"
		+ Bee::getInfo()
		+ to_string(the_amount_of_honey_consumed());
	msg += ";\ndistance - "
		+ to_string(distance);

	return msg;
}

string ScoutBee::getName() {
	return "Scout Bee";
}