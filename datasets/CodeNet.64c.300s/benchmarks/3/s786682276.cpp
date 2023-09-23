#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int *array;
	array = new int[n];
	for (int i = 0; i < n; i++) cin >> array[i];
	for (int j = n - 1; j > 0; j--) cout << array[j] << " ";
	cout << array[0] << endl;
	return 0;
}