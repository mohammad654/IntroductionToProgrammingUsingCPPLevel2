#include<vector>

#include<iostream>

using namespace std;
void ReadNumbers(vector < int > & vNumbers) {
	char ReadMore = 'Y';
	int Number;
	while(ReadMore == 'Y' || ReadMore == 'y') {
		cout << "Please enter a number? "<<end;
		cin >> Number;
		vNumbers.push_back(Number);
		cout << "\nDo you want to read more numbers? Y/N ?";
		cin >> ReadMore;
	}
}
void PrintVectorNumbers(vector < int > & vNumbers) {
	cout << "Numbers Vector: \n\n";
	// ranged loop
	for(int Number: vNumbers) {
		cout << Number << endl;
	}
	cout << endl;
}

int main() {
	 cout << "\n\n\n\n****************************************************\n\n";
	vector <int> vNumbers;    
	ReadNumbers(vNumbers);     
	PrintVectorNumbers(vNumbers);
	cout << "\n\n***************************************************\n\n";
	return 0;
}
