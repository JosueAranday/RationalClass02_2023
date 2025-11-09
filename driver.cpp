// Overloaded Operations With Rational
// Tester Code for Challenge 6, Programming Fundamentals 2
// Author: Josue Aranday
// 11/09/2023
// Tests the different operations for Rational10.h and Rational10.cpp
#include <iostream>
#include <stdexcept>
#include "Rational10.h"
using namespace std;

void displayRational(const string&, const Rational10&);

int main() {
	int d1{ 0 };
	int n1{ 0 };
	int d2{ 0 };
	int n2{ 0 };
	int menuChoice{ 0 };

	cout << "Type Numerator #1: " << endl;
	cin >> n1;
	cout << "\nType Denominator #1 (cannot be 0): " << endl;
	cin >> d1;
	Rational10 r1(n1, d1);

	cout << endl;
	displayRational("Fraction #1: ", r1);
	cout << endl;

	cout << "Type Numerator #2: " << endl;
	cin >> n2;
	cout << "\nType Denominator #2 (cannot be 0): " << endl;
	cin >> d2;

	Rational10 r2(n2, d2);

	cout << endl;
	displayRational("Fraction #2: ", r2);
	cout << endl;

	do {
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		cout << "Operations available:\n" << endl;
		cout << "   1) Add both fractions" << endl;
		cout << "      " << r1.toString2() << " + " << r2.toString2() << endl;
		cout << "   2) Substract fraction #2 to fraction #1" << endl;
		cout << "      " << r1.toString2() << " - " << r2.toString2() << endl;
		cout << "   3) Substract fraction #1 to fraction #2" << endl;
		cout << "      " << r2.toString2() << " - " << r1.toString2() << endl;
		cout << "   4) Multiply both fractions" << endl;
		cout << "      " << r1.toString2() << " X " << r2.toString2() << endl;
		cout << "   5) Divide fraction #2 to fraction #1" << endl;
		cout << "      " << r1.toString2() << " / " << r2.toString2() << endl;
		cout << "   6) Divide fraction #1 to fraction #2" << endl;
		cout << "      " << r2.toString2() << " / " << r1.toString2() << endl;
		cout << "   7) Exit the program" << endl;
		cout << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;

		Rational10 delete_r3;
		Rational10 new_r3;

		cin >> menuChoice;

		switch (menuChoice) {
		case 1:
			cout << "The Sum of both fractions is: " << endl;
			new_r3 = r1 + r2;
			displayRational("", new_r3);
			cout << endl;
			break;
		case 2:
			cout << "The Diference fraction #1 to franction #2 is: " << endl;
			new_r3 = r1 - r2;
			displayRational("", new_r3);
			cout << endl;
			break;
		case 3:
			cout << "The Diference fraction #2 to franction #1 is: " << endl;\
			new_r3 = r2 - r1;
			displayRational("", new_r3);
			cout << endl;
			break;
		case 4:
			cout << "The Product of both fractions is: " << endl;
			new_r3 = r1 * r2;
			displayRational("", new_r3);
			cout << endl;
			break;
		case 5:
			cout << "The Quotient of fraction #1 divided by franction #2 is: " << endl;
			new_r3 = r1 / r2;
			displayRational("", new_r3);
			cout << endl;
			break;
		case 6:
			cout << "The Quotient of fraction #2 divided by franction #1 is: " << endl;
			new_r3 = r2 / r1;
			displayRational("", new_r3);
			cout << endl;
			break;
		case 7:
			cout << "Thank you for testing... Goodbye!" << endl;

			break;
		default:
			cout << "That is not a valid option. Try again." << endl;
		}

	} while (menuChoice != 7);


	system("pause");
	return 0;
}

void displayRational(const string& message, const Rational10& rational) {
	cout << message << "\n" << rational.toString() << endl;
	cout << "Decimal form  = " << rational.toDecimal() << endl;
}
