#include "NurseBee.h"


double NurseBee::getAmountOfRoyalJellyPerDay() {
	return amount_of_royal_jelly_per_day;
}
void NurseBee::setAmountOfRoyalJellyPerDay(double amount_of_royal_jelly_per_day) {
	if (amount_of_royal_jelly_per_day > 0) {
		this->amount_of_royal_jelly_per_day
			= amount_of_royal_jelly_per_day;
	}
}


double NurseBee::the_amount_of_honey_consumed() {
	return honey_consumption + honey_consumption
		* amount_of_royal_jelly_per_day * 600;
}

string NurseBee::getInfo() {
	string msg = "Nurse Bee:\n"
		+ Bee::getInfo()
		+ to_string(the_amount_of_honey_consumed());
	msg += ";\nAmount of royal jelly per day - "
		+ to_string(amount_of_royal_jelly_per_day);

	return msg;
}

string NurseBee::getName() {
	return "Nurse Bee";
}