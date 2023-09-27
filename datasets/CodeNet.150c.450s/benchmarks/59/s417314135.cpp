#include<iostream>
using namespace std;

int main() {
	int i, j, n, tmp, a[100];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (i = 0; i < n; i++) {
		tmp = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (a[j] > tmp)a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = tmp;
		for (j = 0; j < n; j++) {
			cout << a[j];
			if (j != n - 1)cout << " ";
			else cout << endl;
		}
	}
	return 0;
}