#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int n,i,j;
	int *a;
	int tmp;

	cin >> n;

	a = new int[n];

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (i = 0; i < n; i++) {
		j = (n-1-i);
		if (i < j) {
			tmp		= a[i];
			a[i]	= a[j];
			a[j]	= tmp;
		}
		cout << a[i];
		if (i < (n-1)) {
			cout << " ";
		}
	}
	cout << endl;

	delete[] a;
	return 0;
}

