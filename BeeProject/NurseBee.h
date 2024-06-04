#pragma once
#include "Bee.h"
class NurseBee : public Bee
{
private:
	double amount_of_royal_jelly_per_day;
public:
	NurseBee() : Bee(), amount_of_royal_jelly_per_day(0.002) {}

	NurseBee(int life_in_days) 
		: Bee(life_in_days), amount_of_royal_jelly_per_day(0.002) {}

	NurseBee(double amount_of_royal_jelly_per_day) 
		: Bee(), 
		amount_of_royal_jelly_per_day(amount_of_royal_jelly_per_day) {}

	NurseBee(int life_in_days, double amount_of_royal_jelly_per_day)
		: Bee(life_in_days),
		amount_of_royal_jelly_per_day(amount_of_royal_jelly_per_day) {}

	double getAmountOfRoyalJellyPerDay();
	void setAmountOfRoyalJellyPerDay(double amount_of_royal_jelly_per_day);


	double the_amount_of_honey_consumed() override;
	string getInfo() override;

	string getName() override;
};

