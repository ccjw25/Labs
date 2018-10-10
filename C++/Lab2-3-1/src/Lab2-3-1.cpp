//============================================================================
// Name        : Lab2-3-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned c0; int steps = 0;
	cout << "Enter a number: ";
	cin >> c0;
	while (c0 != 1){
		if (c0 % 2 ==1){
			c0 = (3*c0)+1;
			steps++;
		}
		else {
			c0/=2;
			steps++;
		}
		cout << c0<< endl;
	}
	cout << "Steps" << "=" << steps << endl;
	return 0;
}
