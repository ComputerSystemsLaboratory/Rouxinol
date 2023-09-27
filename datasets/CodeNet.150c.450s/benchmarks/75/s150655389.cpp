// 2017-01-10
#include <iostream>
using namespace std;

int H = 0;

void maxHeapify(int* a, int i) {
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;
	if (l <= H && a[l] > a[i]) {
		largest = l;
	} else {
		largest = i;
	}
	if (r <= H && a[r] > a[largest]) {
		largest = r;
	}
	if (largest != i) {
		int t = a[i];
		a[i] = a[largest];
		a[largest] = t;
		maxHeapify(a, largest);
	}
}

void buildMaxHeap(int* a) {
	for (int i = (H + 1) / 2 - 1; i >= 0; i--) {
		maxHeapify(a, i);
	}
}

int main() {
	int a[500002] = {};
	cin >> H;
	for (int i = 0; i < H; i++) {
		cin >> a[i];
	}
	buildMaxHeap(a);
	for (int i = 0; i < H; i++) {
		cout << ' ' << a[i];
	}
	cout << endl;
	return 0;
}