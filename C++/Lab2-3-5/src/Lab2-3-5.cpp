//============================================================================
// Name        : Lab2-3-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int length;
	cout << "Enter side length greater than one: ";
			cin >> length;

	if (length <= 1 or length >= 23){
		while (length >= 23){
			cout << "That number is too big, try again: ";
			cin >> length;
		}
		while (length <= 1){
			cout << "That number will not make a good rectangle. Try again: ";
			cin >> length;
		}
	}
	length -= 2;
	cout << '+';
	for(int i = 0; i < length; i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < length; i++) {
		cout << '|';
		for(int j = 0; j < length; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < length; i++)
		cout << '-';
	cout << '+' << endl;

	return 0;
}
