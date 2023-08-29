#pragma warning(disable: 4996)
#include <iostream>

#include <string>

#include <vector>

#include <fstream>
#include <ctime>
 using namespace std;

void LoadDataFromFileToVector(string FileName,vector <string>&vFileContent) {
	fstream myFile;
	myFile.open("myFile.txt", ios::in); //read Mode
	if(myFile.is_open()) {
		string line;
		while(getline(myFile, line)) {
			vFileContent.push_back(line);
		}
		myFile.close();
	}
}


void saveDataFromVectorToFile(string fileName, vector < string > fileVector) {
	fstream myFile;
	myFile.open("myFile.txt", ios::out);
	if(myFile.is_open()) {
		for(string line: fileVector) {
			if(line != "") 
				cout << line << endl;
		}
		myFile.close();
	}
}

void deleteRecoreFromFile(string fileName, string record) {
	vector <string> vFileContent;
	LoadDataFromFileToVector(fileName, vFileContent);
	for(string & line: vFileContent) {
		if(line == record) line = "";
	}
	saveDataFromVectorToFile(fileName, vFileContent);
}

void updateRecordInFile(string fileName, string record, string updateTo) {
	vector < string > vFileContent;
		LoadDataFromFileToVector(fileName, vFileContent);
	for(string & line: vFileContent) {
		if(line == record) {
			line = updateTo;
		}
	}
		saveDataFromVectorToFile(fileName, vFileContent);
}
void printFileContect(string fileName) {
	fstream myFile;
	myFile.open(fileName, ios::in); //read Mode
	if(myFile.is_open()) {
		string line;
		while(getline(myFile, line)) {
			cout << line << endl;
		}
		myFile.close();
	}
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	cout << "File Content Before Delete.\n";
	printFileContect("myFile.txt");
	updateRecordInFile("myFile.txt", "c++","11111111111");
	cout << "\nFile Content After updat.\n";
	//cout << "\nFile Content After Delete.\n";
	printFileContect("myFile.txt");

	cout << "\n\n***************************************************\n\n";
	return 0;
}

/* cout<<""<<endl;

   g++ index.cpp -o index.exe
   index.exe
   
    saveDataFromVectorToFile.cpp
	
Mohammad
c++
c#
java
Mohammad
  */