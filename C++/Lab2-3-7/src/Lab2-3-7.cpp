//============================================================================
// Name        : Lab2-3-7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	unsigned long long a = 1;
	unsigned long long b = 1;
	unsigned long long c;

	do {
		cout << "Iterations: ";
		cin >> n;
	}while (n < 0);

	for (int d=2; d<n; d++){
		c = a+b;
		a=b;
		b=c;
	}

	cout << c;

	return 0;
}
