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
	int two=1;

	cout << "Enter a positive power power: ";
	cin >> n;

	while (n < 20 or n > 63){

		cout << "Enter a positive power: " << endl;
		cin >> n;
	}

	for (int j=0; j<n; j++){
		two *=2;
	}
	cout << two << endl;
	return 0;

}
