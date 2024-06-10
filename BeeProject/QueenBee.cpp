#include "QueenBee.h"

string QueenBee::getSize() {
	return size;
}
void QueenBee::setSize(string size) {
	if (size == "small" || size == "average" || size == "large") {
		this->size = size;
	}
}

int QueenBee::getNumberOfEggsLaidPerDay() {
	return number_of_eggs_laid_per_day;
}
void QueenBee::setNumberOfEggsLaidPerDay(int number_of_eggs_laid_per_day) {
	if (number_of_eggs_laid_per_day > 0) {
		this->number_of_eggs_laid_per_day = number_of_eggs_laid_per_day;
	}
}

int QueenBee::getAge() {
	return age;
}
void QueenBee::setAge(int age) {
	if (age > 0 && age < 6) {
		this->age = age;
	}
}

double QueenBee::the_amount_of_honey_consumed() {
	double weight = 0;
	if (size == "small") {
		weight = 0.000085;
	}
	else if (size == "average") {
		weight = 0.000165;
	}
	else if (size == "large") {
		weight = 0.000240;
	}

	double honey_consumption = Bee::the_amount_of_honey_consumed() * weight
		* number_of_eggs_laid_per_day * age * 1.5 + Bee::the_amount_of_honey_consumed();
	return honey_consumption;
}

string QueenBee::getInfo() {
	string msg = "Queen Bee:";
	msg += "\nHoney consumption - "
		+ to_string(the_amount_of_honey_consumed());
	msg += "\nSize - " + size;
	msg += ";\nNumber of eggs laid per day - "
		+ to_string(number_of_eggs_laid_per_day);
	msg += ";\nAge - " + to_string(age);

	return msg;
}

string QueenBee::getName() {
	return "Queen Bee";
}