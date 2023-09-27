#include<iostream>
#include<algorithm>
using namespace std;

int b[2000000];

void countingSort(int a[], int n, int maxa);

int main() {
	int i, j, n, maxa, a[2000000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0)maxa = a[0];
		else maxa = max(maxa, a[i]);
	}
	countingSort(a, n, maxa);
	for (i = 0; i < n; i++) {
		cout << b[i];
		if (i != n - 1)cout << " ";
	}
	cout << endl;
	return 0;
}

void countingSort(int a[], int n, int maxa) {
	int i, c[10001] = {};
	for (i = 0; i < n; i++) c[a[i]]++;
	for (i = 1; i < 10001; i++)c[i] += c[i - 1];
	for (i = n - 1; i >= 0; i--) {
		b[c[a[i]] - 1] = a[i];
		c[a[i]]--;
	}
}