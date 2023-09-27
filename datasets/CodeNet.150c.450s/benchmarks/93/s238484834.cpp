#include <iostream>
#include <utility>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_C

const int inf = 1000000000;

int part(int a[], char b[], int p, int r) {
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j] <= x) {
			i += 1;
			swap(a[i], a[j]);
			swap(b[i], b[j]);
		}
	}
	swap(a[i + 1], a[r]);
	swap(b[i + 1], b[r]);
	return i + 1;
}

void qsort(int a[], char b[], int p, int r) {
	if (p < r) {
		int q = part(a, b, p, r);
		qsort(a, b, p, q - 1);
		qsort(a, b, q + 1, r);
	}
}


void merge(int a[], char b[], int l, int m, int r) {
	int n1 = m - l;
	int n2 = r - m;
	int al[n1], ar[n2];
	char bl[n1], br[n2];
	for (int i = 0; i < n1; i++) {
		al[i] = a[l + i];
		bl[i] = b[l + i];
	}
	for (int i = 0; i < n2; i++) {
		ar[i] = a[m + i];
		br[i] = b[m + i];
	}
	al[n1] = inf;
	ar[n2] = inf;
	bl[n1] = 255;
	br[n2] = 255;
	int i = 0, j = 0;
	for (int k = l; k < r; k++) {
		if (al[i] <= ar[j]) {
			a[k] = al[i];
			b[k] = bl[i];
			i += 1;
		} else {
			a[k] = ar[j];
			b[k] = br[j];
			j += 1;
		}
	}
}

void mergesort(int a[], char b[], int l, int r) {
	if (l + 1 < r) {
		int m = (l + r) / 2;
		mergesort(a, b, l, m);
		mergesort(a, b, m, r);
		merge(a, b, l, m, r);
	}
}

int main() {
	int n;
	cin >> n;
	int oa[n], a[n];
	char ob[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> ob[i] >> oa[i];
		b[i] = ob[i];
		a[i] = oa[i];
	}
	qsort(a, b, 0, n - 1);
	mergesort(oa, ob, 0, n);
	/*for (int i = 1; i < n; i++) {
		int ta = oa[i];
		char tb = ob[i];
		if (oa[i - 1] > ta) {
			int j = i;
			do {
				oa[j] = oa[j - 1];
				ob[j] = ob[j - 1];
				j--;
			} while (j > 0 && oa[j - 1] > ta);
			oa[j] = ta;
			ob[j] = tb;
		}
	}*/
	
	bool stable = true;
	for (int i = 0; i < n; i++) {
		if (b[i] != ob[i]) {
			stable = false;
			break;
		}
	}
	
	cout << (stable ? "Stable" : "Not stable") << endl;
	for (int i = 0; i < n; i++) cout << b[i] << " " << a[i] << endl;
	return 0;
}