#include "stdafx.h"
#include "Printer.h"
#include <string>
#include <iostream>

using namespace std;

// Basic constructor.
Printer::Printer()
{
	// Set standard values.
	this->secondName = "Isfarca";
	this->firstName = "Fethi";
}

// Constructor with overloading.
Printer::Printer(string _secondName, string _firstName)
{
	// Initialize default values.
	this->secondName = _secondName;
	this->firstName = _firstName;
}

// Output the complete name.
void Printer::Print()
{
	cout << this->secondName << ", " << this->firstName << endl;
}