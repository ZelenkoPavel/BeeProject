#include <iostream>
#include "Bee.h"
#include "Beehive.h"

#include "BuilderBee.h"
#include "Drone.h"
#include "GuardBee.h"
#include "NurseBee.h"
#include "QueenBee.h"
#include "ScoutBee.h"
#include "WorkerBee.h"

using namespace std;

int main() {

	QueenBee queenBee1;
	QueenBee queenBee2;

	BuilderBee builderBee;
	Drone drone;
	GuardBee guardBee;
	NurseBee nurseBee;
	ScoutBee scoutBee;
	WorkerBee workerBee1;
	WorkerBee workerBee2;
	WorkerBee workerBee3;
	WorkerBee workerBee4;
	WorkerBee workerBee5;


	//cout << queenBee.getName() << endl;
	//cout << builderBee.getName() << endl;
	//cout << drone.getName() << endl;
	//cout << guardBee.getName() << endl;
	//cout << nurseBee.getName() << endl;
	//cout << scoutBee.getName() << endl;
	//cout << workerBee1.getName() << endl;

	//cout << "Sdfgsfgsfdg" << endl;
	Beehive hive1;

	hive1.addBee(queenBee1);
	hive1.addBee(queenBee2);

	//hive1.addBee(guardBee);
	//hive1.addBee(drone);
	//hive1.addBee(workerBee2);
	//hive1.addBee(scoutBee);
	
	//hive1.addBee(workerBee5);
	//hive1.addBee(workerBee3);
	//hive1.addBee(workerBee4);
	
	//hive1.addBee(nurseBee);
	//hive1.addBee(builderBee);
	//hive1.addBee(workerBee1);

	cout << hive1.getInfoAboutEveryBody() << endl;
	cout << hive1.getSize() << endl;
	cout << hive1.getTheTotalNumberOfBees() << endl;
	return 0;
}