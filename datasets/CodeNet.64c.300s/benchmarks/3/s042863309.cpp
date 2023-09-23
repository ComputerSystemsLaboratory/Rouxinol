#include <iostream>
using namespace std;

int main()
{
	int size;
	
	cin >> size;
	
	int *d = new int[size];
	
	for (int i = 0; i < size; i++)
		cin >> d[i];
	
	for (int i = size - 1; i > 0; i--)
		cout << d[i] << ' ';
	cout << d[0] << endl;
	
	delete [] d;

	return 0;
}