#include<iostream>
using namespace std;

int main()
{
	int *pa;
	int n;

	cin >> n;

	pa = new int[n];

	for (int i = 0; i < n; i++){

		cin >> pa[i];
	}

	cout << pa[n - 1];

	for (int j = 1; j <= n-1; j++){
		
		cout << " " << pa[n - 1 - j];
	}

	cout << endl;

	delete[] pa;

	return 0;

}