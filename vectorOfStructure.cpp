#include <iostream>

#include <vector>

#include <string>
  

#include <limits> 
using namespace std;
struct stEmployee{ 
string FirstName; 
string LastName; 
float Salary;
 }; 


int main() {
	cout << "\n\n\n\n****************************************************\n\n";
//std::vector<T> vector_name;
vector <stEmployee> vEmployees;
 stEmployee tempEmployee;
 
 tempEmployee.FirstName = "Mohammed"; 
 tempEmployee.LastName = "Abu-Hahdoud"; 
 tempEmployee.Salary = 5000; 
 vEmployees.push_back(tempEmployee); 
 
 tempEmployee.FirstName = "Ali";    
 tempEmployee.LastName = "Maher";   
 tempEmployee.Salary = 300;    
 vEmployees.push_back(tempEmployee);  
 
 
 tempEmployee.FirstName = "Aya";    
 tempEmployee.LastName = "Omran";   
 tempEmployee.Salary = 1000;   
 vEmployees.push_back(tempEmployee); 
 
 cout << "Employees Vector: \n\n";
 
 for (stEmployee &Employee : vEmployees) {  
 cout << "FirstName: " << Employee.FirstName << endl;  
 cout << "LastName : " << Employee.LastName << endl; 
 cout << "Salary   : " << Employee.Salary << endl;   
 cout << endl;   
 }    
 cout << endl; 

	cout << "\n\n***************************************************\n\n";
	return 0;
}
