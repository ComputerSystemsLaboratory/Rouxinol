#include <iostream>
using namespace std;

long long numOfInvs(int a[], int from, int to, int t[]) {
	if (from == to) {
		return 0LL;
	}
	int mid = (from + to) / 2;
	long long n = numOfInvs(a, from, mid, t) + numOfInvs(a, mid + 1, to, t);
	int i = from, j = mid + 1, k = 0;
	while (i <= mid && j <= to) {
		if (a[i] <= a[j]) {
			t[k++] = a[i++];
		}
		else {
			n += mid - i + 1;
			t[k++] = a[j++];
		}
	}
	if (i == mid + 1) {
		while (j <= to) {
			t[k++] = a[j++];
		}
	}
	else {
		while (i <= mid) {
			t[k++] = a[i++];
		}
	}
	k = 0;
	for (int i = from; i <= to; ++i) {
		a[i] = t[k++];
	}
	return n;
}

long long numOfInvs(int a[], int n) {
	int *t = new int[n];
	int from = 0;
	int to = n - 1;
	long long ret = numOfInvs(a, from, to, t);
	delete[] t;
	return ret;
}

int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	cout << numOfInvs(a, n) << endl;
	delete[] a;
}
