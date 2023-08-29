#include <iostream>

#include "math1.h"

#include "readNumber.h"

using namespace std;
using namespace readNum;
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int a = readPositiveNumber("Please enter a positive number");
	int b = readPositiveNumber("Please enter a positive number");

	cout << "1-From math = " << myLib::MySum(a, b) << endl;
	  
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}

