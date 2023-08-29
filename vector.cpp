#include <iostream>

#include <vector>

#include <string>

#include <limits>

using namespace std;
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	vector < int > vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "First Element: " << vNumbers.front() << endl;
	cout << "Last Element: " << vNumbers.back() << endl;
	//returns the number of elements present in the vector  
	cout << "Size: " << vNumbers.size() << endl;
	//check the overall size of a vector    
	cout << "Capacity : " << vNumbers.capacity() << endl;
	//returns 1 (true) if the vector is empty   
	cout << "Empty : " << vNumbers.empty() << endl;

	vector < int > num {1,2,3,4,5};
	cout << "Initial Vector: ";
	for(constint & i: num) {
		cout << i << "  ";
	}
	cout << "\n\nUpdated Vector: ";
	for(int & i: num) {
		i = 20;
		cout << i << "  ";
	}
	num[1] = 40;
	num.at(2) = 80;
	num.at(4) = 90;
	cout << "\n\nUpdated Vector: ";
	for(constint & i: num) {
		cout << i << "  ";
	}
	
		
	vector<int>::iterator iter;	
	for(iter=num.begin();iter !=num.end();iter++){
		cout<<"iterator = "<<*iter<<endl;
	}
	cout << "\n\n***************************************************\n\n";
	return 0;
}