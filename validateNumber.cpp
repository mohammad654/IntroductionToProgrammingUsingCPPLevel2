#include <iostream>
#include <string>
#include <limits> // Add this line to include the <limits> header.

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



int main() {
    cout << "\n\n\n\n****************************************************\n\n";

    int positiveNumber = readPositiveNumber("Please enter a positive number");
    cout << "You entered: " << positiveNumber << endl;
    
    cout << "\n\n***************************************************\n\n";
    return 0;
}



   
