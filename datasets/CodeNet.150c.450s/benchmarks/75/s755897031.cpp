#include<iostream>

using namespace std;

void maxHeapify(int*, int index, int n);

int main() {
	int n;
	cin >> n;
	int* a = new int[n+1];
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
	}
	for (int i = n / 2;i >= 1;i--) {
		maxHeapify(a, i, n);
	}
	for (int i = 1;i <= n;i++) {
		cout << " " << a[i];
	}
	cout << endl;
}

void maxHeapify(int* a, int index,int n) {
	int l = 2 * index;
	int r = l + 1;
	int largest = index;
	if (l <= n) {
		if (a[l] > a[index]) {
			largest = l;
		}
	}
	if (r <= n) {
		if (a[r] > a[largest]) {
			largest = r;
		}
	}
	if (largest != index) {
		swap(a[index], a[largest]);
		maxHeapify(a, largest, n);
	}
}
