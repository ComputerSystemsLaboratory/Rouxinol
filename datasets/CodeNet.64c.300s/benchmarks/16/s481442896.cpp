#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, a[200000], min;
	long long int ben = -10000000000;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) {
		if (i) {
			if (ben < a[i] - min) ben = a[i] - min;

			if (min > a[i]) min = a[i];
		}
		else min = a[i];
	}

	cout << ben << endl;

	return 0;
}