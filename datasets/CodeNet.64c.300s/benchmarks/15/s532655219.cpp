#include <iostream>
using namespace std;

int main() {
	int n, min, swap=0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n -1; i++) {
		min = i;
		for (int j = i + 1; j < n ; j++) {
			if (a[j] < a[min])
				min = j;
		}
		if (min != i) {
			a[i] = a[min] - a[i];
			a[min] -= a[i];
			a[i] += a[min];
			swap += 1;
		}
	}
	for (int i = 0; i < n-1; i++)
		cout << a[i] << ' ';
		cout << a[n - 1] << endl;
		cout << swap << endl;	
	return 0;
}