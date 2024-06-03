#pragma once
#include "Bee.h"
class GuardBee : public Bee
{
private:
	int number_of_attacks;
public:
	GuardBee() : Bee(), number_of_attacks(0) {}

	GuardBee(int life_in_days) : Bee(life_in_days), number_of_attacks(0) {}

	GuardBee(int number_of_attacks) : Bee(), number_of_attacks(number_of_attacks) {}

	GuardBee(int life_in_days, int number_of_attacks)
		: Bee(life_in_days), number_of_attacks(number_of_attacks) {}


	int getNumberOfAttacks();
	void setNumberOfAttacks(int number_of_attacks);

	double the_amount_of_honey_consumed() override;
	string getInfo() override;
};

