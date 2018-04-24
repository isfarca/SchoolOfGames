#ifndef PRINTER_H

#define PRINTER_H

#include <string>

using namespace std;

class Printer
{
private:
	// Value types
	string secondName;
	string firstName;

public:
	/// <summary>
	/// Basic constructor.
	/// </summary>
	Printer();

	/// <summary>
	/// Constructor with overloading.
	/// </summary>
	/// <param name="_secondName">Second name of person.</param>
	/// <param name="_firstName">First name of person.</param>
	Printer(string _secondName, string _firstName);

	/// <summary>
	/// Output the values from variables 'secondName' and 'firstName'.
	/// </summary>
	void Print();
};

#endif