#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;

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

void readVector(vector <int>& vArray){
string readMor="Y";
    do{
        int item= readPositiveNumber("Please enter a number to add it into the vector.");
        vArray.push_back(item);
        cout << "\nDo you want to read more numbers? Y/N ?";
        cin>>readMor;
    }while(readMor=="Y"||readMor=="y");
}
void printVector(vector <int>& vArray){
cout<<"Vector " ;
    for(int& n:vArray)
          cout<<n<<setw(5);
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
    vector <int>vArray;
    readVector(vArray);
    printVector(vArray);
	cout << "\n\n***************************************************\n\n";
	return 0;
}