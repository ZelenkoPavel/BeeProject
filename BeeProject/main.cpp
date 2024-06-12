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

	Bee* bee1 = new QueenBee{};

	Bee* bee2 = new BuilderBee{};
	//Bee* bee3 = new Drone{};
	//Bee* bee4 = new GuardBee{};
	//Bee* bee5 = new NurseBee{};
	//Bee* bee6 = new ScoutBee{};
	//Bee* bee7 = new WorkerBee{};
	//Bee* bee8 = new WorkerBee{};
	//Bee* bee9 = new WorkerBee{};
	//Bee* bee10 = new WorkerBee{};
	//Bee* bee11 = new WorkerBee{};

	Beehive bees;

	bees.add(bee1);
	bees.add(bee2);
	//bees.add(bee3);
	//bees.add(bee4);
	//bees.add(bee5);
	//bees.add(bee6);
	//bees.add(bee7);
	//bees.add(bee8);
	//bees.add(bee9);
	//bees.add(bee10);
	//bees.add(bee11);

	//cout << bees.getTheTotalNumberOfBees() << endl;
	cout << bees.getInfoAboutEveryBody() << endl;

	return 0;
}