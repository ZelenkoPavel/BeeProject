#include "BuilderBee.h"

double BuilderBee::getTheAmountOfWork() {
	return the_amount_of_work;
}
void BuilderBee::setTheAmountOfWork(double the_amount_of_work) {
	if (the_amount_of_work >= 0) {
		this->the_amount_of_work = the_amount_of_work;
	}
}

double BuilderBee::the_amount_of_honey_consumed() {
	return Bee::the_amount_of_honey_consumed() * the_amount_of_work
		/ 1000 + Bee::the_amount_of_honey_consumed();
}
string BuilderBee::getInfo() {
	string msg = "Scout Bee:\n"
		+ Bee::getInfo()
		+ to_string(the_amount_of_honey_consumed());
	msg += ";\nThe amount of work - "
		+ to_string(the_amount_of_work);

	return msg;
}