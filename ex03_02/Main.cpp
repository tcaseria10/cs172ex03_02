#include <iostream>	
#include "LinearEquation.h"
using namespace std;

// Tyler Caseria
// CS172
// Hw 03 : Exercise 02
// 23 February 2017

int main() {
	int valuea;
	int valueb;
	int valuec;
	int valued;
	int valuee;
	int valuef;

	cout << "Input a value for a, then press enter: ";
	cin >> valuea;
	cout << endl;
	cout << "Input a value for b, then press enter: ";
	cin >> valueb;
	cout << endl;
	cout << "Input a value for c, then press enter: ";
	cin >> valuec;
	cout << endl;
	cout << "Input a value for d, then press enter: ";
	cin >> valued;
	cout << endl;
	cout << "Input a value for e, then press enter: ";
	cin >> valuee;
	cout << endl;
	cout << "Input a value for f, then press enter: ";
	cin >> valuef;
	cout << endl;

	LinearEquation equation1(valuea, valueb, valuec, valued, valuee, valuef);

	if ((equation1.getavalue() *equation1.getdvalue() - equation1.getbvalue()*equation1.getcvalue()) == 0)
		cout << "The equation has no solution." << endl;

	cout << "Your X value is " << equation1.getX() << "." << endl;
	cout << "Your Y value is " << equation1.getY() << "." << endl;

	int one;
	cout << "Press 1, then press enter to exit." << endl;
	cin >> one;
	return 0;
}