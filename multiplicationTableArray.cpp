#include <iostream>
#include <iomanip>
using namespace std;

void fillArray(int arr[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
           arr[i][j] =(i+1)*(j+1);
    }
}
void print2DimensionalArray(int arr[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            cout<<setw(4)<< arr[i][j] << " ";
      cout << endl;
    }
}
int main() {
	cout << "\n\n\n\n****************************************************\n\n";
    int arr[10][10];
    fillArray(arr);
    print2DimensionalArray(arr);
	cout << "\n\n***************************************************\n\n";
	return 0;
}
