#pragma once
#include "Bee.h"
class QueenBee : public Bee
{
private:
	string size; // (small, average, large)
	int number_of_eggs_laid_per_day;
	int age;
public:
	QueenBee() : Bee(), size("medium"), number_of_eggs_laid_per_day(2000), age(1){}

	int getAge();
	void setAge(int age);
};

