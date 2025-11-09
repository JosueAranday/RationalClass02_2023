// Rational10.cpp
// Class Member Functions for Challenge 6, Programming Fundamentals 2
// Author: Josue Aranday
// 11/09/2023
// Reduces the fractions and performs operations with them (Operations Overloaded)
// Member functions for Rational10.h

#include <string>
#include <sstream>
#include <stdexcept>
#include "Rational10.h"		// includes the header Rational.h

using namespace std;

// Setting a reduced form of the fraction inputed
Rational10::Rational10(int num, int den) {
	if (den != 0) {
		if (num < 0 && den < 0) {
			num = num * -1;
			den = den * -1;
		}
		int lcf{ 1 };									// largest common factor
		for (int reducer = 1; reducer <= num || reducer <= den; reducer++) {		// find largest common factor
			if (num%reducer == 0 && den%reducer == 0)
				lcf = reducer;
		}
		numerator = num / lcf;
		denominator = den / lcf;
		if (numerator >= denominator) {
			wholeNum = numerator / denominator;
			numerWhole = numerator % denominator;
		}
	}
	else {
		throw invalid_argument("Denominator cannot be 0");
	}

}

// Display the fraction in form a/b
string Rational10::toString() const {
	if (numerator % denominator == 0) {
		ostringstream output;
		output << "Whole Number  = " << wholeNum;
		return output.str();
	}
	else if(wholeNum == 0) {
		ostringstream output;
		output << "Rational Form = " << numerator << "/" << denominator;
		return output.str();
	}
	else {
		ostringstream output;
		output << "Mixed Form    = " << wholeNum << " " << numerWhole << "/" << denominator
			<< "\nImproper Form = " << "  " << numerator << "/" << denominator;
		return output.str();
	}
}
// To display short version between options
string Rational10::toString2() const {
	ostringstream output;
	output << numerator << "/" << denominator;
	return output.str();
}

Rational10 operator+(const Rational10& rat1, const Rational10& rat2) {
	int new_den = rat1.denominator * rat2.denominator;
	int new_num = (rat1.numerator * rat2.denominator) +
		(rat2.numerator * rat1.denominator);
	return Rational10(new_num, new_den);
}

Rational10 operator-(const Rational10& rat1, const Rational10& rat2) {
	int new_den = rat1.denominator * rat2.denominator;
	int new_num = (rat1.numerator * rat2.denominator) -
		(rat2.numerator * rat1.denominator);
	return Rational10(new_num, new_den);
}

Rational10 operator*(const Rational10& rat1, const Rational10& rat2) {
	int new_num = rat1.numerator * rat2.numerator;
	int new_den = rat1.denominator * rat2.denominator;
	return Rational10(new_num, new_den);
}

Rational10 operator/(const Rational10& rat1, const Rational10& rat2) {
	int new_num = rat1.numerator * rat2.denominator; 
	int new_den = rat1.denominator * rat2.numerator;
	return Rational10(new_num, new_den);
}

// Convert the Fraction to Decimal
double Rational10::toDecimal() const {
	double numerDec = numerator;
	double denomDec = denominator;
	double wholeDec = wholeNum;
	double decimalFinal = numerDec / denomDec;
	return decimalFinal;
}

Rational10::~Rational10() {
}
