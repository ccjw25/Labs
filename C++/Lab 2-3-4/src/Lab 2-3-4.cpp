//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;
	double two=1;

			cout << "Enter a positive power: " << endl;
			cin >> n;


		for (int j=0; j<n; j++){
			two /=2;
		}

		cout.precision(20);
		cout << two;

	return 0;
}
