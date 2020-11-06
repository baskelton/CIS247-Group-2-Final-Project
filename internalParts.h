#pragma once
#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

class internalParts
{
private:
	string manufacture;
	string manufacture2;
	string model;
	string model2;
	double clockSpeed;
	int memory;
	
public:
	internalParts();
	void GPU(string x, string y, int z);
	void CPU(string x, string y, double z);
	int displayInfo();
};

