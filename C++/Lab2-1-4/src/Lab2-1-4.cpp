//============================================================================
// Name        : Lab2-1-4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int year, month, day;
	cout << "Year: ";
	cin >> year;
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;

	month -=2;
	if (month <= 0) {
		month += 12;
		year -= 1;

	}

	month = month * 83;
	month = month / 32;
	month += day;
	month += year;
	month = month + (year / 4);
	month = month - (year / 100);
	month = month + (year / 400);
	int remainder = month % 7;
	cout << remainder << endl;
}
