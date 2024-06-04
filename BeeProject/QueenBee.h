#pragma once
#include "Bee.h"
class QueenBee : public Bee
{
private:
	string size; // (small, average, large)
	int number_of_eggs_laid_per_day;
	int age;
public:
	QueenBee() : size("average"), number_of_eggs_laid_per_day(2000), age(1) {}
	QueenBee(string size, int number_of_eggs_laid_per_day, int age)
		: size(size),
		number_of_eggs_laid_per_day(number_of_eggs_laid_per_day), age(age) {}

	string getSize();
	void setSize(string size);

	int getNumberOfEggsLaidPerDay();
	void setNumberOfEggsLaidPerDay(int number_of_eggs_laid_per_day);

	int getAge();
	void setAge(int age);

	double the_amount_of_honey_consumed() override;
	string getInfo() override;

	string getName() override;
};

