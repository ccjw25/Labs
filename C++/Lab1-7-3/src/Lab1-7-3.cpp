//============================================================================
// Name        : Lab1-7-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a,b,c,d;

	cout << "Enter four integers: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	if (a < 1 or a > 255 or b < 1 or b > 255 or c < 1 or c > 255 or d < 1 or d > 255){
		cout << "A number is invalid. Please try again.";

	}
	else {

	cout << a << "." << b << "." << c << "." << d << endl;

	}
	return 0;
}
