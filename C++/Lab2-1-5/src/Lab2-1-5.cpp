//============================================================================
// Name        : Lab2-1-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int year;
	// cout << "Year: " << endl;
	// cin >> year;

	for (year = 1900; year < 2100; year++) {


		int a = year % 19;
		int b = year % 4;
		int c = year % 7;
		a *= 19;
		a += 24;
		int d = a % 30;
		int e = ((2*b) + (4 * c) + (6 * d) + 5) % 7;
		int Easter_Day = e + d;

		if (Easter_Day < 10 and d + e == 1){
			cout << "March " << d + e + 22 << ", " << year << endl;
		}
		else{
			// cout << "April " << d + e - 9 << ", " << year << endl;
		}
	}
	return 0;
}
