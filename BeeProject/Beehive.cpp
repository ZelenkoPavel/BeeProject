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