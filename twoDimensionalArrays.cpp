x	#include <iostream>

using namespace std;

int main() {
	 cout << "\n\n\n\n****************************************************\n\n";
	int x[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) { 
            x[i][j]=(i+1)*(j+1);
			printf("%0*d ",2,x[i][j]);
        }
		cout<<endl;
    }
								 
	cout << "\n\n***************************************************\n\n";
	return 0;
}
