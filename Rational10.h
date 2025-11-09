// Rational10.h
// Class header for Challenge 6, Programming Fundamentals 2
// Author: Josue Aranday
// 11/09/2023
// Creates fractions and saves them in reduced form (Operations Overloaded)
// Member functions defined in Rational10.cpp

#include <string>

// Prevents multiple inclusions of header
#ifndef RATIONAL10_H
#define RATIONAL10_H

class Rational10 {
	friend Rational10 operator+(const Rational10& rat1, const Rational10& rat2);
	friend Rational10 operator-(const Rational10& rat1, const Rational10& rat2);
	friend Rational10 operator*(const Rational10& rat1, const Rational10& rat2);
	friend Rational10 operator/(const Rational10& rat1, const Rational10& rat2);
public:
	Rational10() : numerator(0), denominator(1) {};
	Rational10(int, int);
	std::string toString() const;
	std::string toString2() const;
	double toDecimal() const;
	~Rational10();

private:
	int numerator{ 0 };
	int denominator{ 1 };
	int numerWhole{ 0 };
	int wholeNum{ 0 };
};
#endif
