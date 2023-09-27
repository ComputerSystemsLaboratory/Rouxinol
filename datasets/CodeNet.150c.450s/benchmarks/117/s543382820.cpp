#include<iostream>
#define INF 1000000000
using namespace std;

int cnt = 0;
void merge(int a[], int left, int mid, int right);
void mergeSort(int a[], int left, int right);

int main() {
	int i, n, a[500001];
	cin >> n;
	for (i = 0; i < n; i++)cin >> a[i];
	mergeSort(a, 0, n);
	for (i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1)cout << " ";
	}
	cout << endl << cnt << endl;
	return 0;
}

void merge(int a[], int left, int mid, int right) {
	int i, j, k, n1, n2, l[250001], r[250001];
	n1 = mid - left;
	n2 = right - mid;
	for (i = 0; i < n1; i++) {
		l[i] = a[left + i];
	}
	for (i = 0; i < n2; i++) {
		r[i] = a[mid + i];
	}
	l[n1] = INF;
	r[n2] = INF;
	i = 0;
	j = 0;
	for (k = left; k < right; k++) {
		if (l[i] <= r[j]) {
			a[k] = l[i];
			i++;
			cnt++;
		} else {
			a[k] = r[j];
			j++;
			cnt++;
		}
	}
}

void mergeSort(int a[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(a, left, mid);
		mergeSort(a, mid, right);
		merge(a, left, mid, right);
	}
}