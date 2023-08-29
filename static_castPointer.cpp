#include <iostream>

#include <vector>

#include<iomanip>// this library stored the std::setw

#include <string>

#include <limits>

using namespace std;
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
		   void * ptr;
			float f1 = 10.5;
			int x = 50;
			ptr = & f1;
			cout << ptr << endl;
			cout << * (static_cast < float * > (ptr)) << endl;
			ptr = & x;
			cout << ptr << endl;
			cout << * (static_cast < int * > (ptr)) << endl;
				
	cout << "\n\n***************************************************\n\n";
	return 0;
}

