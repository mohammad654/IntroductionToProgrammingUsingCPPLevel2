#include <iostream>

#include <vector>

#include <string>

#include <limits>
using namespace std;
struct stEmployee {
	string FirstName;
	string LastName;
	float Salary;
};
void ReadEmployees(vector < stEmployee > & vEmployees) {
	char ReadMore = 'Y';
	stEmployee tempEmployee;
	while(ReadMore == 'Y' || ReadMore == 'y') {
		cout << "Please enter first name? " << endl;
		cin >> tempEmployee.FirstName;
		cout << "Please enter a last name? " << endl;
		cin >> tempEmployee.LastName;
		cout << "Please enter  employee salary? " << endl;
		cin >> tempEmployee.Salary;
		vEmployees.push_back(tempEmployee);
		cout << "\nDo you want to read more employees? Y/N ?";
		cin >> ReadMore;
	}
}
void PrintVectorEmployees(vector < stEmployee > & allEmployees) {
	cout << "\nEmployees Vector: \n\n";
	for(stEmployee & Employee: allEmployees) {
		cout << "FirstName: " << Employee.FirstName << endl;
		cout << "LastName : " << Employee.LastName << endl;
		cout << "Salary   : " << Employee.Salary << endl;
		cout << endl;
	}
	cout << endl;
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//std::vector<T> vector_name;
	vector < stEmployee > vEmployees;
	ReadEmployees(vEmployees);
	PrintVectorEmployees(vEmployees);
	cout << "\n\n***************************************************\n\n";
	return 0;
}
