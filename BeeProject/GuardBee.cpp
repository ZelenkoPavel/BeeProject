#include "GuardBee.h"

int GuardBee::getNumberOfAttacks() {
	return number_of_attacks;
}
void GuardBee::setNumberOfAttacks(int number_of_attacks) {
	if (number_of_attacks >= 0) {
		this->number_of_attacks = number_of_attacks;
	}
}

double GuardBee::the_amount_of_honey_consumed() {
	return honey_consumption + honey_consumption * number_of_attacks / 1000;
}
string GuardBee::getInfo() {
	string msg = "Scout Bee:\n"
		+ Bee::getInfo()
		+ to_string(the_amount_of_honey_consumed());
	msg += ";\nNumber of attacks - "
		+ to_string(number_of_attacks);

	return msg;
}

string GuardBee::getName() {
	return "Guard Bee";
}