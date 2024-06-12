#include "Beehive.h"

string Beehive::getTypeOfHiveConstruction() {
	return type_of_hive_construction;
}
// horizontal, vertical, alpine, 
// dadanovsky, rue, cassette, 
// sunbed (Vladimirsky), horned, 
// boa constrictor, varre, Shapkin's beehive
void Beehive::setTypeOfHiveConstruction(string type_of_hive_construction) {
	if (type_of_hive_construction == "horizontal" ||
		type_of_hive_construction == "vertical" ||
		type_of_hive_construction == "alpine" ||
		type_of_hive_construction == "dadanovsky" ||
		type_of_hive_construction == "rue" ||
		type_of_hive_construction == "cassette" ||
		type_of_hive_construction == "sunbed" ||
		type_of_hive_construction == "horned" ||
		type_of_hive_construction == "boa constrictor" ||
		type_of_hive_construction == "varre" ||
		type_of_hive_construction == "Shapkin's beehive") {
		this->type_of_hive_construction = type_of_hive_construction;
	}
}

int Beehive::getLength() {
	return length;
}
void Beehive::setLength(int length) {
	if (length > 0) {
		this->length = length;
	}
}

int Beehive::getWidth() {
	return width;
}
void Beehive::setWidth(int width) {
	if (width > 0) {

	}
}

int Beehive::getHeight() {
	return height;
}
void Beehive::setHeight(int height) {
	if (height > 0) {
		this->height = height;
	}
}

string Beehive::getMaterial() {
	return material;
}
void Beehive::setMaterial(string material) {
	this->material = material;
}

int Beehive::getNumberOfRemovableFrames() {
	return number_of_removable_frames;
}
void Beehive::setNumberOfRemovableFrames
(int number_of_removable_frames) {
	if (number_of_removable_frames > 0) {
		this->number_of_removable_frames
			= number_of_removable_frames;
	}
}

////////////////////////////

int Beehive::getSize() {
	return size + 1;
}


bool Beehive::isEmpty(int index) {
	return size == 0;
}


/*void Beehive::addBee(Bee bee) {
	cout << bee.getName() << endl;
	int index = beeDefinition(bee.getName());
	if (index < 0) {
		return;
	}
	if (isEmpty(index)) {
		switch (index) {
		case 0:hive[0] = new QueenBee[1]; break;
		case 1:hive[1] = new BuilderBee[1]; break;
		case 2:hive[2] = new Drone[1]; break;
		case 3:hive[3] = new GuardBee[1]; break;
		case 4:hive[4] = new NurseBee[1]; break;
		case 5:hive[5] = new ScoutBee[1]; break;
		case 6:hive[6] = new WorkerBee[1]; break;
		default:cout << "Error. Bee - " << bee.getInfo() << endl; return;
		}
		hive[index][size[index]] = bee;
	}
	else {
		Bee* temp;
		switch (index) {
		case 0:temp = new QueenBee[size[index] + 1]; break;
		case 1:temp = new BuilderBee[size[index] + 1]; break;
		case 2:temp = new Drone[size[index] + 1]; break;
		case 3:temp = new GuardBee[size[index] + 1]; break;
		case 4:temp = new NurseBee[size[index] + 1]; break;
		case 5:temp = new ScoutBee[size[index] + 1]; break;
		case 6:temp = new WorkerBee[size[index] + 1]; break;
		default:cout << "Error. Bee - " << bee.getInfo() << endl; return;
		}

		for (int i = 0; i < size[index]; i++)
		{
			temp[i] = hive[index][i];
		}
		temp[size[index]] = bee;

		delete[] hive[index];
		hive[index] = temp;
	}
	size[index]++;
	cout << hive[index][0].getInfo() << endl;
}*/


void Beehive::add(Bee* bee) {

	if (isEmpty(0)) {
		bees = new Bee * [1];
		bees[0] = bee;
	}
	else {
		Bee** temp = new Bee * [size + 1];
		
		for (int i = 0; i < size; i++)
		{
			temp[i] = bees[i];
		}
		temp[size] = bee;
		for (int i = 0; i < size; i++)
		{
			delete[] bees[i];
		}
		cout << "jghhg" << endl;
		
		delete[] bees;
		
		bees = temp;
	}
	size++;
}


void Beehive::remove(Bee* bee) {
	remove(findFirstIndex(bee));
}
int Beehive::findFirstIndex(Bee* bee) {

	for (int i = 0; i < size; i++)
	{
		if (bees[i]->getInfo() == bee->getInfo()) {
			return i;
		}
	}
	return -1;
}

void Beehive::remove(int index) {
	if (index < 0) {
		return;
	}
	Bee** temp = new Bee * [size - 1];

	for (int i = 0, j = 0; i < size; i++)
	{
		if (i != index) {
			temp[j] = bees[i];
			j++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		delete[] bees[i];
	}

	delete[] bees;

	bees = temp;

	size--;
}

string Beehive::getInfoAboutEveryBody() {
	string msg = "";
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < size; j++)
		{
			msg += bees[j]->getInfo() + "\n";
		}
	}

	return msg;
}



int Beehive::getTheTotalNumberOfBees() {
	return getSize();
}

int Beehive::getNumberOfBeesOfAParticularVariety(string name_bee) {
	int result = 0;

	for (int i = 0; i < size; i++)
	{
		if (bees[i]->getName() == name_bee) {
			result++;
		}
	}

	return result;
}