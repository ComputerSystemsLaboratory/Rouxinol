#include<iostream>
#include<string>
using namespace std;


int main() {
	int a[100000] = {0};
	int i=0, j=0,n;
	cin >> n;
	for (int k = 0; k < n; k++) {
		cin >> a[k];
	}
	while (j < n - 1) {
		if (a[j] <= a[n - 1]) {
			int swap = a[j];
			a[j] = a[i];
			a[i] = swap;
			i++;
		}
		j++;
	}
	int swap = a[n - 1];
	a[n - 1] = a[i];
	a[i] = swap;
	for (int k = 0; k < i; k++) {
		cout << a[k] << " " << flush;
	}
	cout << "[" << a[i] << "]" << flush;
	for (int k = i + 1; k < n; k++) {
		cout << " " << a[k] << flush;
	}
	cout << endl;
	return 0;
}