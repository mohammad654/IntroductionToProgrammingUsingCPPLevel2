#include <iostream>

using namespace std;
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number;
	cout <<"enter a number "<<endl;
	cin >> number;
	//string a=  (number>0)?"positive":"negative";
	string a=  (number==0)?"Zero":((number>0)?"positive":"negative");
	cout<<"Number is "<<a <<endl;
	
	int arr[]={2,4,5,7,8,9};
	for (int n:arr){
		cout<<n<<endl;
		}
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
