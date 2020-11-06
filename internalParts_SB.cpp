#include "internalParts.h"

internalParts::internalParts() {
	manufacture = "Unknown";
	manufacture2 = "Unknown";
	model = "Unknown";
	model2 = "Uknown";
	memory = 0;
	clockSpeed = 0;
}
void internalParts::GPU(string x, string y, int z) { // Constructor with parameters
	manufacture = x;
	model = y;
	memory = z;

}
void internalParts::CPU(string x, string y, double z) { // Constructor with parameters
	manufacture2 = x;
	model2 = y;
	clockSpeed = z;
}
int internalParts::displayInfo() {
	int choice = 0;

	// Do/while loop here with switch
	do
	{
		cout << "Information Display" << endl;
		
		cout << "Enter 1 to view information about the GPU" << endl;
		
		cout << "Enter 2 to view information about the CPU" << endl;

		cout << "Enter 3 to exit the program" << endl;

		cout << "Enter your choice (1, 2, or 3): ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Manufacturer: " << manufacture << endl;
			cout << "Model: " << model << endl;
			cout << "Memory: " << memory << endl;
			cout << endl;
			break;

		case 2:
			cout << "Manufacturer: " << manufacture2 << endl;
			cout << "Model: " << model2 << endl;
			cout << "Clock Speed: " << clockSpeed << endl;
			cout << endl;
			break;

		case 3:
			break;

		default:
			cout << "Invalid entry" << endl;
			cout << endl;
		}
	} while (choice != 3);
	
	return 0;
}
