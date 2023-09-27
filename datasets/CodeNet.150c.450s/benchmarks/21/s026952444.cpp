#include <iostream>
using namespace std;

int X_Cubic(int);

int main()
{
	int num;
	cin >> num;
	
	cout << num * num * num << endl;

	return 0;
}


int X_Cubic(int num)
{
	return  num * num * num;
}