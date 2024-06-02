#include "QueenBee.h"

int QueenBee::getAge() {
	return age;
}
void QueenBee::setAge(int age) {
	if (age > 0 && age < 6) {
		this->age = age;
	}
}