#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
using namespace std;

int cnt = 0;

void merge(int a[], int left, int mid, int right);
void mergeSort(int a[], int left, int right);

int main(void)
{
	int n;
	cin >> n;
	int *s = new int[n];
	for (int i = 0; i < n; i++) cin >> s[i];

	mergeSort(s, 0, n - 1);

	cout << s[0];
	for (int i = 1; i < n; i++) cout << " " << s[i];
	cout << endl << cnt << endl;
	
	delete[] s;
	return 0;
}

void merge(int a[], int left, int mid, int right)
{	
	int n1 = mid - left + 1;
	int n2 = right - (mid + 1) + 1;
	int *l = new int[n1 + 1];
	int *r = new int[n2 + 1];
	for (int i = 0; i <= n1; i++) l[i] = a[left + i];
	for (int i = 0; i <= n2; i++) r[i] = a[(mid + 1) + i];
	l[n1] = 1000000000;
	r[n2] = 1000000000;
	
	int i = 0, j = 0;
	for (int k = left; k <= right; k++) {
		if (l[i] <= r[j]) {
			a[k] = l[i];
			i++;
		}
		else {
			a[k] = r[j];
			j++;
		}
		cnt++;
	}
	delete[] l, r;
}

void mergeSort(int a[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid + 1, right);
		merge(a, left, mid, right);
	}
}