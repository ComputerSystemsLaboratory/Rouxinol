#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++) 
		cin >> a[i];
	cin >> a[n - 1];
	for (int j = 0; j < n - 1; j++) 
		cout << a[n - 1 - j] << " ";
	cout << a[0] << endl;
	return 0;
}