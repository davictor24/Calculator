#ifndef _CLASS_H
#define _CLASS_H

#include <iostream>
#include <sstream>
using namespace std; 

class Calc
{
public:
	Calc();
	void pressDigit(string);
	void pressOperator(char); 
	void point(); 
	void clear(); 
	void clearAll(); 
	void percent(); 
	void equals(); 
	string getDisplay(); 

private:
	string display; 
	double accumulator; 
	char currentOperation; 
	bool operatorJustPressed; 
	double performOperation(double, double, char); 
	bool pointExists(string); 
	double toDouble(string); 
	string toString(double); 
};

#endif