#include<iostream>
#include<stdio.h>
using namespace std;
#define max 100000
#define sentinel 100000000

struct card {
	char c;
	int num;
};

card l[max / 2 + 2], r[max / 2 + 2];

void merge(card a[], int n, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++) l[i] = a[left + i];
	for (int i = 0; i < n2; i++) r[i] = a[mid + i];
	l[n1].num = sentinel;
	r[n2].num = sentinel;
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		if (l[i].num <= r[j].num) {
			a[k] = l[i++];
		}
		else {
			a[k] = r[j++];
		}
	}
}

void mergesort(card a[], int n, int left, int right) {
	int mid;
	if (left + 1 < right) {
		mid = (left + right) / 2;
		mergesort(a, n, left, mid);
		mergesort(a, n, mid, right);
		merge(a, n, left, mid, right);
	}
}

int partition(card a[], int n, int p, int r) {
	card t, x;
	x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j].num <= x.num) {
			i++;
			t = a[i]; a[i] = a[j]; a[j] = t;
		}
	}
	t = a[i + 1]; a[i + 1] = a[r]; a[r] = t;
	return i + 1;
}

void quicksort(card a[], int n, int p, int r) {
	int q;
	if (p < r) {
		q = partition(a, n, p, r);
		quicksort(a, n, p, q - 1);
		quicksort(a, n, q + 1, r);
	}
}

int main()
{
	int n, i, v;
	card a[max], b[max];
	char s[10];
	int stable = 1;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> s >> v;
		a[i].c = b[i].c = s[0];
		a[i].num = b[i].num = v;
	}

	mergesort(a, n, 0, n);
	quicksort(b, n, 0, n - 1);

	for (i = 0; i < n; i++) {
		if (a[i].c != b[i].c) stable = 0;
	}

	if (stable == 0) cout << "Not stable\n";
	else cout << "Stable\n";
	for (i = 0; i < n; i++) {
		cout << b[i].c << " " << b[i].num << endl;
	}
	return 0;
}

