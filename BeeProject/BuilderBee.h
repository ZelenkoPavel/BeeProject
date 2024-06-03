#pragma once
#include "Bee.h"
class BuilderBee : public Bee
{
private:
	double the_amount_of_work;
public:
	BuilderBee() : Bee(), the_amount_of_work(0) {}

	BuilderBee(int life_in_days) : Bee(life_in_days), the_amount_of_work(0) {}

	BuilderBee(double the_amount_of_work) 
		: Bee(), the_amount_of_work(the_amount_of_work) {}

	BuilderBee(int life_in_days, double the_amount_oà_work)
		: Bee(life_in_days), the_amount_of_work(the_amount_of_work) {}


	double getTheAmountOfWork();
	void setTheAmountOfWork(double the_amount_of_work);

	double the_amount_of_honey_consumed() override;
	string getInfo() override;
};

