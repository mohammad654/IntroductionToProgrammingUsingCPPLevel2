#include <iostream>

#include <vector>

#include <string>

#include <limits> // Add this line to include the <limits> header.

using namespace std;
vector < int > readPositiveNumber() {
	vector < int > numbers;
	int number = 0;
	string message = "Enter a number to add to the Vector(array)";
	cout << message << endl;
	cin >> number;
	numbers.push_back(number);
	char readMore = 'Y';
	
	while(readMore == 'Y' || readMore == 'y') {
		if(cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits < std::streamsize > ::max(), '\n'); 
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> number;
		}	
		cout << "\nDo you want to read more numbers? Y/N ?" << endl;
		cin >> readMore;
		if(readMore == 'Y' || readMore == 'y') {
		cout << message<< endl;
		cin >> number;
		numbers.push_back(number);
		}
		
	}
	return numbers;
}

void printVector(vector < int > & vNumbers){
		cout << "\nNumbers entered:\n";
	for(int num: vNumbers) {
		cout << num << endl;
	}	
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	vector < int > veNumber = readPositiveNumber();
	printVector(veNumber);

	cout << "\n\n***************************************************\n\n";
	return 0;
}
