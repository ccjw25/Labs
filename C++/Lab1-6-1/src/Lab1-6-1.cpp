//============================================================================
// Name        : Lab1-6-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main(void) {
	bool answer;
	int value;

	cout << "Enter a value: ";
	cin >> value;

	answer = value >= 0 and value < 10;
	if (answer == false){


		answer = (value * 2) < 20 and value - 2 > -2;
		if (answer == false){
			answer = (value - 1) > 1 and (value / 2) < 10;
			if (answer == false){


				answer = value == 111;
			}
		}
	}
	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
	return 0;
}
