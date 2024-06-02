#include "Bee.h"

int Bee::getLifeInDays() {
	return life_in_days;
}
void Bee::setLifeInDays(int life_in_days) {
	if (life_in_days > 30 && life_in_days < 250) {
		this->life_in_days = life_in_days;
	}
}

double Bee::getHoneyConsumption() {
	return honey_consumption;
}