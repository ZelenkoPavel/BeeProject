#include "WorkerBee.h"

string WorkerBee::getTypeOfCollect() {
	return type_of_collect;
}
void WorkerBee::setTypeOfCollect(string type_of_collect) {
	this->type_of_collect = type_of_collect;
}

double WorkerBee::getDistance() {
	return distance;
}
void WorkerBee::setDistance(double distance) {
	if (distance >= 0) {
		this->distance = distance;
	}
}

double WorkerBee::the_amount_of_honey_consumed() {
	return honey_consumption + honey_consumption * distance / 100;
}
string WorkerBee::getInfo() {
	string msg = "Worker Bee:\n"
		+ Bee::getInfo()
		+ to_string(the_amount_of_honey_consumed());
	msg += ";\ndistance - "
		+ to_string(distance);
	msg += ";\nType of collect - "
		+ type_of_collect;

	return msg;
}