#pragma warning(disable: 4996)
#include <iostream>

#include <string>

#include <vector>

#include <fstream>
#include <ctime>
using namespace std;
void writeOrReadContent(string file) {
	fstream myFile;
	//  myFile.open("myFile.txt",ios::out); //write mode
	//   myFile.open("myFile.txt",ios::app); // append mode
	//   myFile.open("myFile.txt",ios::in); // read mode
	//	myFile.open("myFile2.txt", ios::out | ios::app); // append mode  or read
	   myFile.open(file,ios::app); 

	if(myFile.is_open()) {
		myFile << "Mohammad ali \n";
		myFile << "Hi, this is the first line\n";
		myFile << "myFile.open(\"myFile.txt\",ios::out); //write mode\n";
		myFile << "myFile.open(\"myFile.txt\",ios::out|ios::app); // append or write mode\n";
		myFile << "myFile.open(\"myFile.txt\",ios::in); // read mode\n";
		myFile.close();
	}
}
void PrintFileContenet(string file){
		fstream myFile;
		myFile.open(file,ios::in);
		string line;		
		if(myFile.is_open()) {
			while(getline(myFile,line)){
				cout<<line<<endl;	
			}
			myFile.close();
				
		}
	
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	//writeOrReadContent("myFile.txt");
	PrintFileContenet("myFile.txt");
	cout << "\n\n***************************************************\n\n";
	return 0;
}
