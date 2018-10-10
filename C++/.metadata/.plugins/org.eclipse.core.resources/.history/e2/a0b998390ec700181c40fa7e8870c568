//============================================================================
// Name        : Lab2-3-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double pi4 = 0.;
	long n;
	int d;
	int s=1;
	int b=1;

	cout << "Number of Iterations: ";
	cin >> n;

	for( d=0; d<n; d++){
		pi4+=s/(float)b;
		s=-s;
		b+=2;
	}

	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;

	return 0;
}
