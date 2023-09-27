#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
using namespace std;

int n;
void CountingSort(int a[], int b[], int k);

int main(void)
{
	cin >> n;
	int *a = new int[n + 1];
	int *b = new int[n + 1];

	for (int i = 1; i <= n; i++) cin >> a[i];

	CountingSort(a, b, 10000);

	cout << b[1];
	for (int i = 2; i <= n; i++) cout << " " << b[i];
	cout << endl;

	return 0;
}

void CountingSort(int a[], int b[], int k)
{
	int c[10000 + 1] = { 0 };

	for (int j = 1; j <= n; j++) c[a[j]]++;

	for (int i = 1; i <= k; i++) c[i] += c[i - 1];

	for (int j = n; j >= 1; j--) {
		b[c[a[j]]] = a[j];
		c[a[j]]--;
	}
}