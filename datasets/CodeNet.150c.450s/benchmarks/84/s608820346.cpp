#include<iostream>

#define INFINITY 1000000001

using namespace std;


long long merge(int*, int left, int mid, int right);
long long mergeSort(int*, int left, int right);

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	long long count = mergeSort(a, 0, n);
	cout << count << endl;
}

long long merge(int* a, int left, int mid, int right) {
	long long count = 0;
	int* l, * r;
	l = new int[mid - left + 1];
	r = new int[right - mid + 1];
	for (int i = 0;i < mid - left;i++) {
		l[i] = a[i + left];
	}
	for (int i = 0;i < right - mid;i++) {
		r[i] = a[mid + i];
	}
	l[mid - left] = r[right - mid] = INFINITY;
	int j = 0, k = 0;
	for (int i = 0;i < right - left;i++) {
		if (l[j] <= r[k]) {
			a[left + i] = l[j];
			j++;
			count += k;
		}
		else {
			a[left + i] = r[k];
			k++;
		}
	}
	return count;
}

long long mergeSort(int* a, int left, int right) {
	if (right - left <= 1)return 0;
	long long count = 0;
	int mid = (left + right) / 2;
	count += mergeSort(a, left, mid);
	count += mergeSort(a, mid, right);
	count += merge(a, left, mid, right);
	return count;
}
