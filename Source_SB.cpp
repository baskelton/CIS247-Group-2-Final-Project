/*
* Program: Course Project SANDBOX
* Group 2
* Date 11/5/2020
* Purpose: Generate ideas on how to improve the program without affecting
* the main file.
*/

#include "internalParts.h"

int main()
{
	string manu1, mod1, manu2, mod2;
	int mem;
	double clkSpd;
	
	internalParts computer1;

	cout << "Please enter the manufacturer of your GPU: " << endl;
	getline(cin, manu1);

	cout << "Please enter the model of your GPU: " << endl;
	getline(cin, mod1);

	cout << "Please enter the memory of your GPU: " << endl;
	cin >> mem;

	computer1.GPU(manu1, mod1, mem);

	cout << "Please enter the manufacturer of your CPU: " << endl;
	cin.ignore();
	getline(cin, manu2);

	cout << "Please enter the model of your CPU: " << endl;
	getline(cin, mod2);

	cout << "Please enter the clock speed of your CPU: " << endl;
	cin >> clkSpd;

	computer1.CPU(manu2, mod2, clkSpd);

	computer1.displayInfo();

	system("pause");
	return 0;
}