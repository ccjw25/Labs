//============================================================================
// Name        : Lab2-1-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main (void) {
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (year >= 1582)
	{
		if (year % 4 != 0){
			cout << "Common Year";
		}
		else if (year % 100 != 0){
			cout << "Leap Year";
		}
		else if (year % 400 != 0){
			cout << "Common Year";
		}
		else {
			cout << "Leap Year";
		}
	}
	else{
		cout << "Year not valid.";
	}

	return 0;
}
