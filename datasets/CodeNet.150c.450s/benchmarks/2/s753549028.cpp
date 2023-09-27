#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <utility>
using namespace std;

int partition(int a[], int p, int r);

int main(void)
{
	int n;
	cin >> n;
	int *a = new int[n];

	for (int i = 0; i < n; i++) cin >> a[i];

	int q = partition(a, 0, n - 1);

	cout << a[0];
	for (int i = 1; i < n; i++) {
		cout << " ";
		if (i == q) cout << "[" << a[i] << "]";
		else cout << a[i];
	}
	cout << endl;

	return 0;
}

int partition(int a[], int p, int r)
{
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j] <= x) {
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}