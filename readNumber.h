#pragma once
#include <iostream>

#include <cmath>
	
using namespace std;
namespace readNum {
int readPositiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number < 0);
	return number;
}
}