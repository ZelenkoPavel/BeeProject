#include <iostream>
#include "Bee.h"
#include "Beehive.h"


using namespace std;

int main() {
	QueenBee queenBee;

	BuilderBee builderBee;
	Drone drone;
	GuardBee guardBee;
	NurseBee nurseBee;
	ScoutBee scoutBee;
	WorkerBee workerBee;

	int size = 7;
	Bee* bee = new Bee[size]{ queenBee, builderBee, drone, guardBee,
				nurseBee, scoutBee, workerBee };

	cout << queenBee.getInfo() << endl;

	return 0;
}