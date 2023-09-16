#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;
struct stEmployee{
string name;
float salary;
};

int readPositiveNumber(string message) {
    int number;
    cout << message << endl;
    cin >> number;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input.
        cout << "Invalid Number, Enter a valid one:" << endl;
        cin >> number;
    }
    return number;
}

void readVector(vector <stEmployee>& vEmployees){
string readMor="Y";

stEmployee tempEmploye;
    do{
         cout << "Enter employee name"<<endl;
         cin>>tempEmploye.name;
         cout << "Enter employee salary"<<endl;
         cin>>tempEmploye.salary;
        vEmployees.push_back(tempEmploye);

        cout << "\nDo you want to add more employees? Y/N ?";
        cin>>readMor;
    }while(readMor=="Y"||readMor=="y");
}
void printEmployees(vector <stEmployee>& vEmployees){
cout<<"Employees " <<endl;
    for(stEmployee& employee:vEmployees){
          cout<<"-----------------------------------"<<endl;
          cout<<"Employee name : "<<employee.name<<endl;
          cout<<"Employee salary : "<<employee.salary<<endl;
    }
}
void removeEmployees(vector <stEmployee>& vEmployees){
  int remove =readPositiveNumber("Do you want to remove employee? Yes=1/No=2 ?");
  while(true){
  if(remove==1){
       vEmployees.pop_back();
        remove =readPositiveNumber("Do you want to remove more  employee? Yes=1/No=2 ?");
  }else{
         break;
  }

  }
cout<<"Employees after removing  " <<endl;
    for(stEmployee& employee:vEmployees){
          cout<<"-----------------------------------"<<endl;
          cout<<"Employee name : "<<employee.name<<endl;
          cout<<"Employee salary : "<<employee.salary<<endl;
    }
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
    vector <stEmployee>vEmployees;
    readVector(vEmployees);
    printEmployees(vEmployees);
    removeEmployees(vEmployees);
	cout << "\n\n***************************************************\n\n";
	return 0;
}
