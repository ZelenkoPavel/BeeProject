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

string error = "Incorrect data was entered.";

string Beehive::getSize() {
	string result = "";
	result += "QueenBee - " + to_string(size[0]);
	result += "\nBuilderBee - " + to_string(size[1]);
	result += "\nDrone - " + to_string(size[2]);
	result += "\nGuardBee - " + to_string(size[3]);
	result += "\nNurseBee - " + to_string(size[4]);
	result += "\nScoutBee - " + to_string(size[5]);
	result += "\nWorkerBee - " + to_string(size[6]);

	return result;
}

bool Beehive::isEmpty(int index) {
	return size[index] == 0;
}

int Beehive::beeDefinition(string name) {

	int index = -1;

	if (name == "Queen Bee") {
		index = 0;
	}
	else if (name == "Builder Bee") {
		index = 1;
	}
	else if (name == "Drone") {
		index = 2;
	}
	else if (name == "Guard Bee") {
		index = 3;
	}
	else if (name == "Nurse Bee") {
		index = 4;
	}
	else if (name == "Scout Bee") {
		index = 5;
	}
	else if (name == "Worker Bee") {
		index = 6;
	}

	return index;
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


//0 - QueenBee
void Beehive::addBee(QueenBee bee) {
	
	if (isEmpty(0)) {

		hive[0] = new QueenBee[1];
		
		hive[0][size[0]] = bee;
	}
	else {
		
		Bee* temp = new QueenBee[size[0] + 1];


		for (int i = 0; i < size[0]; i++)
		{
			temp[i] = hive[0][i];
		}
		temp[size[0]] = bee;

		delete[] hive[0];
		
		hive[0] = temp;
	}
	size[0]++;
}
//1 - BuilderBee

void Beehive::addBee(BuilderBee bee) {

	if (isEmpty(1)) {

		hive[1] = new BuilderBee[1];

		hive[1][size[1]] = bee;
	}
	else {
		Bee* temp = new BuilderBee[size[1] + 1];


		for (int i = 0; i < size[1]; i++)
		{
			temp[i] = hive[1][i];
		}
		temp[size[1]] = bee;

		delete[] hive[1];
		hive[1] = temp;
	}
	size[1]++;
}
//2 - Drone

void Beehive::addBee(Drone bee) {

	if (isEmpty(2)) {

		hive[2] = new Drone[1];

		hive[2][size[2]] = bee;
	}
	else {
		Bee* temp = new Drone[size[2] + 1];


		for (int i = 0; i < size[2]; i++)
		{
			temp[i] = hive[2][i];
		}
		temp[size[2]] = bee;

		delete[] hive[2];
		hive[2] = temp;
	}
	size[2]++;
}
//3 - GuardBee

void Beehive::addBee(GuardBee bee) {

	if (isEmpty(3)) {

		hive[3] = new WorkerBee[1];

		hive[3][size[3]] = bee;
	}
	else {
		Bee* temp = new WorkerBee[size[3] + 1];


		for (int i = 0; i < size[3]; i++)
		{
			temp[i] = hive[3][i];
		}
		temp[size[3]] = bee;

		delete[] hive[3];
		hive[3] = temp;
	}
	size[3]++;
}
//4 - NurseBee

void Beehive::addBee(NurseBee bee) {

	if (isEmpty(4)) {

		hive[4] = new NurseBee[1];

		hive[4][size[4]] = bee;
	}
	else {
		Bee* temp = new NurseBee[size[4] + 1];


		for (int i = 0; i < size[4]; i++)
		{
			temp[i] = hive[4][i];
		}
		temp[size[4]] = bee;

		delete[] hive[4];
		hive[4] = temp;
	}
	size[4]++;
}
//5 - ScoutBee

void Beehive::addBee(ScoutBee bee) {

	if (isEmpty(5)) {

		hive[5] = new ScoutBee[1];

		hive[5][size[5]] = bee;
	}
	else {
		Bee* temp = new ScoutBee[size[5] + 1];


		for (int i = 0; i < size[5]; i++)
		{
			temp[i] = hive[5][i];
		}
		temp[size[5]] = bee;

		delete[] hive[5];
		hive[5] = temp;
	}
	size[5]++;
}
//6 - WorkerBee

void Beehive::addBee(WorkerBee bee) {

	if (isEmpty(6)) {

		hive[6] = new WorkerBee[1];

		hive[6][size[6]] = bee;
	}
	else {

		Bee* temp = new WorkerBee[size[6] + 1];


		for (int i = 0; i < size[6]; i++)
		{
			temp[i] = hive[6][i];
		}

		temp[size[6]] = bee;

		delete[] hive[6];
		
		hive[6] = temp;
	}
	size[6]++;
}

void Beehive::remove(Bee bee) {
	int index = findFirstIndex(bee);
	remove(index, beeDefinition(bee.getName()));
}
int Beehive::findFirstIndex(Bee bee) {
	int index = beeDefinition(bee.getName());
	for (int i = 0; i < size[index]; i++)
	{
		if (hive[index][i].getInfo() == bee.getInfo()) {
			return i;
		}
	}
	return -1;
}

void Beehive::remove(int index, int index_of_array) {
	if (index < 0 || index_of_array) {
		cout << error << endl;
		return;
	}
	Bee* temp;
	switch (index_of_array) {
	case 0:temp = new QueenBee[size[index] - 1]; break;
	case 1:temp = new BuilderBee[size[index] - 1]; break;
	case 2:temp = new Drone[size[index] - 1]; break;
	case 3:temp = new GuardBee[size[index] - 1]; break;
	case 4:temp = new NurseBee[size[index] - 1]; break;
	case 5:temp = new ScoutBee[size[index] - 1]; break;
	case 6:temp = new WorkerBee[size[index] - 1]; break;
	default:cout << "Error. index_of_array - " << index_of_array << endl; return;
	}
	if (index >= 0) {
		for (int i = 0, j = 0; i < size[index_of_array]; i++)
		{
			if (i != index) {
				temp[j] = hive[index_of_array][i];
				j++;
			}
		}
		delete[] hive[index_of_array];
		hive[index_of_array] = temp;
	}
	size[index_of_array];
}

string Beehive::getInfoAboutEveryBody() {
	string msg = "";
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < size[i]; j++)
		{
			msg += hive[i][j].getInfo() + "\n";
		}
	}

	return msg;
}



int Beehive::getTheTotalNumberOfBees() {
	int s = 0;
	for (int i = 0; i < 7; i++)
	{
		s += size[i];
	}
	return s;
}

int Beehive::getNumberOfBeesOfAParticularVariety(string name_bee) {
	int index = beeDefinition(name_bee);

	return index > -1 && index < 7 ? size[index] : -1;
}