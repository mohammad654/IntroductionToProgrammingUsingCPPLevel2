#include <iostream>

#include <vector>

#include <string>

#include <limits>

using namespace std;
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	string S1 = "My Name is Mohammad Ali, I Love Programming.";
	//Prints the length of the string 
	cout << S1.length() << endl;
	//Returns the letter at position 3 
	cout << S1.at(3) << endl;
	//Adds @Shikhi to the end of string  
	S1.append(" @Shikhi");
	cout << S1 << endl;
	//inserts In at position 7    
	S1.insert(7, " In ");
	cout << S1 << endl;
	//Prints all the next 8 letters from position 16.
	cout << S1.substr(16, 8) << endl;
	//Adds one character to the end of the string
	S1.push_back('X');
	cout << S1 << endl;
	//Removes one character from the end of the string
	S1.pop_back();
	cout << S1 << endl;
	//Finds In in the string 
	cout << S1.find("In") << endl;
	//Finds in in the string   
	cout << S1.find("in") << endl;
	if(S1.find("in") == S1.npos) {
		cout << "in is not found";
	}
	//clears all string letters.   
	S1.clear();
	cout << S1 << endl;
	cout << "\n\n***************************************************\n\n";
	return 0;
}
