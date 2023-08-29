#include <iostream>

#include <string>

using namespace std;

void Recursion(int N, int M ) {
	if(N <= M) {
		cout << N << endl;
		Recursion(N + 1, M);
	}
}
void RecursionRe(int M, int N) {
	if(M>= N) {
		cout << M << endl;
		RecursionRe(M -1, N);
	}
}
int myPower(int base,int power){
	if(power==0){
		return 1;
	}      else{
		return (base*myPower(base,power-1));
	}
	/*
	2*myPower(2,1);  2*2=4
	2*myPower(2,2);  2*4= 8
	2*myPower(2,3);  2*8= 16
	2*myPower(2,4);  16
	
	*/
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
	cout<<"Recursion"<<endl;
	Recursion(1,10);
	cout<<"RecursionRe"<<endl;
	RecursionRe(10,1);  
	cout<<"myPower = "<<myPower(2,4)<<endl;


	cout << "\n\n***************************************************\n\n";
	return 0;
}
