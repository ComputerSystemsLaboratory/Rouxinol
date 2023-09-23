#include<iostream>
using namespace std;
void write(int[], int);
int main() {
	int n, a[1010];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		write(a, n);
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
	}
	write(a, n);
	return 0;
}

void write(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
}