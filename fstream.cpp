#include <iostream>

#include <vector>

#include <string>

#include <limits>

#include<fstream>
 using namespace std;
void PrintFileContenet(string FileName) {
	fstream myFile;
	myFile.open(FileName, ios::in);//read Mode
	if(myFile.is_open()) {
		string Line;
		while(getline(myFile, Line)) {
			cout << Line << endl;
		}
		myFile.close();
	}
}

int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	PrintFileContenet("myFile.txt");
	
	fstream myFile;
	//MyFile.open("MyFile.txt", ios::out); //Write Mode
	myFile.open("myFile.txt", ios::out | ios::app); //append Mode
	if(myFile.is_open()) {
		myFile << "Hi, Mohammad Ali\n";
		myFile << "Hi, this is the first line\n";
		myFile << "Hi, this is the second line\n";
		myFile << "Hi, this is the third line\n";
		myFile.close();
	}
	cout << "\n\n***************************************************\n\n";
	return 0;
}
