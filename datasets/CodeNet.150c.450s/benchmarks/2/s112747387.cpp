#include<iostream>
using namespace std;
#define max 100000

int partition(int a[], int p, int r) {
	int x = a[r];
	int i = p - 1;
	for (int j = 0; j < r; j++) {
		if (a[j] <= x) {
			i++;
			int tmp;
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}
	int tmpp;
	tmpp = a[i + 1];
	a[i + 1] = a[r];
	a[r] = tmpp;

	return i + 1;
}

int main()
{
	int n;
	int a[max];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int num1 = partition(a, 0, n-1);
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		if (i == num1) cout << "[";
		cout << a[i];
		if (i == num1) cout << "]";
	}
	cout << endl;

	return 0;
}
