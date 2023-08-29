#include<iostream>

#include<fstream>

#include<string>
#include<vector>

#include<fstream>

using namespace std;
void LoadDataFromFileToVector(string FileName, vector < string > & vFileContent) {
	fstream MyFile;
	MyFile.open(FileName, ios::in); //read Mode
	if(MyFile.is_open()) {
		string Line;
		while(getline(MyFile, Line)) {
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	vector < string > vFileContenet;
	LoadDataFromFileToVector("myFile.txt", vFileContenet);
	for(string & Line: vFileContenet) {
		cout << Line << endl;
	}
	cout << "\n\n***************************************************\n\n";
	return 0;
}
