//============================================================================
// Name        : Lab1-4-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main(void) {
	int i, j, k;
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;

	i = i+2;
	j = j-i;
	k = i/j;
	k = k+k;
	k = k-1;
	j = k % i;
	k = k + i + k;
	k = k + k / j;
	k = k * k * k;
	k = i * j + k;


	cout << k;
	return 0;
}
