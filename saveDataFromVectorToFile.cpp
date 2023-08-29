#pragma warning(disable: 4996)
#include <iostream>

#include <string>

#include <vector>

#include <fstream>

#include <ctime>

using namespace std;
void saveDataFromVectorToFile(string file,vector <string> fileVector) {
	fstream myFile;
	myFile.open("myFile.txt",ios::app);
	if(myFile.is_open()) {
			for(string line:fileVector){
				if(line!="")
				cout<<line<<endl;	
			}		
		myFile.close();
	}
}

int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	vector < string > file{"c++","c#","java"};
	
	saveDataFromVectorToFile("myFile.txt",file);
	
//	PrintFileContenet("myFile.txt");

	cout << "\n\n***************************************************\n\n";
	return 0;
}
