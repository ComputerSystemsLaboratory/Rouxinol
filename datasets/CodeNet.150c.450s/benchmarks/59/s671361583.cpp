#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <math.h>
#define ll long long;

using namespace std;
int n;
int a[100];

void InsertionSort(int a[]) {
	for (int i = 0; i < n; i++) {
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
		for (int i = 0; i < n-1; i++) {
			cout << a[i] << ' ';
		}
		cout << a[n - 1] << endl;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	InsertionSort(a);
}