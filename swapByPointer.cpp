#include <iostream>

#include <vector>

#include <string>

#include <limits>
void swapByRefrence(int &n1, int &n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
void swapByPointer(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
using namespace std;
int main()
{
	cout << "\n\n\n\n****************************************************\n\n";
	int num1 = 1, num2 = 2;
	cout << "befor swapping Refrence " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	swapByRefrence(num1, num2);
	cout << "after swapping  Refrence" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int a1 = 1, a2 = 2;
	swapByPointer(&a1, &a2);
	cout << "after swapping  Pointer" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "\n\n***************************************************\n\n";
	return 0;
}
