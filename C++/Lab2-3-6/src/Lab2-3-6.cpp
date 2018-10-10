//============================================================================
// Name        : Lab2-3-6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int s=1;
	int h;
	cout << "Enter a pyramind height: ";
	cin >> h;
	// save for bottom row

	while (h < 3 or h > 8){
		cout << "Input a number from 3 to 8: ";
		cin >> h;
	}
int H = h;
	for (int b = 0; b < 3; b++){
	for (int a = 0; a < h-1; a++)

	cout << "*" << endl;
	for (int l = 0; l < h; l++){
		for (int c = 0; c < h-1; c++)
			cout << " ";
		cout << "*";
		for (int a = 0; a < s; a++){
			cout << " ";
			s += 2;
		}
		cout << "*" << endl;
	}
	for (int b = 0, b < h; b++)
		cout << "*";

	return 0;
}
