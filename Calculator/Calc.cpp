#include "StdAfx.h"
#include "Calc.h"


Calc::Calc() {
	clearAll();
}

void Calc::pressDigit(string digit) {
	if ((display == "0" && !pointExists(display)) || operatorJustPressed) display = digit;
	else display += digit;
	operatorJustPressed = false;
}

void Calc::pressOperator(char op) {
	accumulator = performOperation(accumulator, toDouble(display), currentOperation);
	display = toString(accumulator);
	currentOperation = op;
	operatorJustPressed = true;
}

void Calc::point() {
	if (!pointExists(display)) {
		if (operatorJustPressed) display = "0.";
		else display += ".";
	}
}

void Calc::clear() {
	operatorJustPressed = false;
	int len = display.length();
	if (len == 1) display = "0";
	else display = display.substr(0, len - 1);
}

void Calc::clearAll() {
	operatorJustPressed = false;
	display = "0";
	accumulator = 0;
	currentOperation = ' ';
}

void Calc::percent() {
	accumulator = performOperation(accumulator, accumulator * toDouble(display) / 100, currentOperation);
	display = toString(accumulator);
	operatorJustPressed = true;
	currentOperation = ' ';
}

void Calc::equals() {
    accumulator = performOperation(accumulator, toDouble(display), currentOperation);
	display = toString(accumulator);
	operatorJustPressed = true;
	currentOperation = ' ';
}

string Calc::getDisplay() {
	return display;
}

double Calc::performOperation(double a, double b, char op) {
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return (double)a / b;
	default:
		return b;
	}
}

bool Calc::pointExists(string s) {
	int n = s.find('.');
	if (n == string::npos) return false;
	else return true;
}

double Calc::toDouble(string s) {
	istringstream is(s);
	double d;
	is >> d;
	return d;
}

string Calc::toString(double d) {
	ostringstream os;
	os << d;
	return os.str();
}
