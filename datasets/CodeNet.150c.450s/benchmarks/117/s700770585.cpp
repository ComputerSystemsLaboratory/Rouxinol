#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B

const int inf = 1000000000;
int count = 0;

void merge(int a[], int l, int m, int r) {
	int n1 = m - l;
	int n2 = r - m;
	int al[n1], ar[n2];
	for (int i = 0; i < n1; i++) al[i] = a[l + i];
	for (int i = 0; i < n2; i++) ar[i] = a[m + i];
	al[n1] = inf;
	ar[n2] = inf;
	int i = 0, j = 0;
	for (int k = l; k < r; k++) {
		count++;
		if (al[i] <= ar[j]) {
			a[k] = al[i];
			i += 1;
		} else {
			a[k] = ar[j];
			j += 1;
		}
	}
}

void mergesort(int a[], int l, int r) {
	if (l + 1 < r) {
		int m = (l + r) / 2;
		mergesort(a, l, m);
		mergesort(a, m, r);
		merge(a, l, m, r);
	}
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	mergesort(a, 0, n);
	cout << a[0];
	for (int i = 1; i < n; i++) cout << " " << a[i];
	cout << endl;
	cout << count << endl;
	return 0;
}