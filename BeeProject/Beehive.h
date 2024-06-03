#pragma once
#include <iostream>
#include "Bee.h"

#include "BuilderBee.h"
#include "Drone.h"
#include "GuardBee.h"
#include "NurseBee.h"
#include "QueenBee.h"
#include "ScoutBee.h"
#include "WorkerBee.h"

using namespace std;

class Beehive
{
private:

	string type_of_hive_construction;
	// horizontal, vertical, alpine, 
	// dadanovsky, rue, cassette, 
	// sunbed (Vladimirsky), horned, 
	// boa constrictor, varre, Shapkin's beehive
	int length;
	int width;
	int height;
	string material;
	int number_of_removable_frames;
public:
	Beehive() : type_of_hive_construction("vertical"),
		length(1), width(1), height(1), material("tree"),
		number_of_removable_frames(10){}

	Beehive(string type_of_hive_construction) :
		type_of_hive_construction(type_of_hive_construction),
		length(1), width(1), height(1), material("tree"),
		number_of_removable_frames(10) {}

	Beehive(string type_of_hive_construction, int length,
	int width, int height) :
		type_of_hive_construction(type_of_hive_construction),
		length(length), width(width), height(height), material("tree"),
		number_of_removable_frames(10) {}

	Beehive(string type_of_hive_construction, int length,
		int width, int height, string material) :
		type_of_hive_construction(type_of_hive_construction),
		length(length), width(width), height(height), material(material),
		number_of_removable_frames(10) {}

	Beehive(string type_of_hive_construction, int length,
		int width, int height, string material,
		int number_of_removable_frames) :
		type_of_hive_construction(type_of_hive_construction),
		length(length), width(width), height(height), material(material),
		number_of_removable_frames(number_of_removable_frames) {}

	string getTypeOfHiveConstruction();
	void setTypeOfHiveConstruction(string type_of_hive_construction);
	
	int getLength();
	void setLength(int length);

	int getWidth();
	void setWidth(int width);

	int getHeight();
	void setHeight(int height);

	string getMaterial();
	void setMaterial(string material);

	int getNumberOfRemovableFrames();
	void setNumberOfRemovableFrames(int number_of_removable_frames);
};

