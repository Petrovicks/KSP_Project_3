#include "RocketPart.h"
#include "CommandModule.h"
#include "RocketShip.h"
#include "Destinations.h"
#include <iostream>

using namespace std;

int main() {
	RocketShip plutoisaplanet;

	int num_passengers;
	CommandModule* c1;
	c1 = new CommandModule();

	cout << "A rocketship has three components: the command module up top, then a fuel tank, then a thruster at the bottom." << endl;
	cout << "First, enter the number of passengers that will be inside the command module: ";
	cin >> num_passengers;
	c1->setNumberPassengers(num_passengers);
	cout << "\nNumber of passengers set to " << c1->getNumberPassengers() << endl;

	plutoisaplanet += c1;
	plutoisaplanet.returnAllParts();

	ifstream testFile;
	testFile.open("Destinations.ini");
	destinationParameters::getDestinationParams(testFile); //Printing values in ini file as a test for reading in files.
	return 0;
}
