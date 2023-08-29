#include <iostream>

#include <vector>

#include<iomanip>// this library stored the std::setw

#include <string>

#include <limits>

using namespace std;
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	int a = 10;
	int * p = & a;
	int & b = a;
	cout << "value of a = " << a << endl;
	cout << "value of b = " << b << endl;
	cout << "value of p = " << p << endl;
	cout << "address of *p = " << * p << endl;
	cout << "address of &a = " << & a << endl;
	cout << "address of &b = " << & b << endl;
	cout << "address of &p = " << & p << endl;
	cout << "after a=99;-------------------------" << endl;
	a = 99;
	cout << "value of a = " << a << endl;
	cout << "value of b = " << b << endl;
	cout << "value of p = " << p << endl;
	cout << "address of *p = " << * p << endl;
	cout << "address of &a = " << & a << endl;
	cout << "address of &b = " << & b << endl;
	cout << "address of &p = " << & p << endl;
	cout << "after b=22;-------------------------" << endl;
	b = 22;
	//&b = 22;    doesn't copiled 
	cout << "value of a = " << a << endl;
	cout << "value of b = " << b << endl;
	cout << "value of p = " << p << endl;
	cout << "address of *p = " << * p << endl;
	cout << "address of &a = " << & a << endl;
	cout << "address of &b = " << & b << endl;
	cout << "address of &p = " << & p << endl;
	cout << "after *p=66;-------------------------" << endl;* p = 66;
	cout << "value of a = " << a << endl;
	cout << "value of b = " << b << endl;
	cout << "value of p = " << p << endl;
	cout << "address of *p = " << * p << endl;
	cout << "address of &a = " << & a << endl;
	cout << "address of &b = " << & b << endl;
	cout << "address of &p = " << & p << endl;
	cout << "\n\n***************************************************\n\n";
	return 0;
}
