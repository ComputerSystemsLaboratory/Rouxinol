#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <map>

using namespace std;

int H, A[500001];

int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return 2 * i + 1;
}

void maxHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int largest = i;
	if (l <= H && A[l] > A[i]) {
		largest = l;
	}
	if (r <= H&&A[r] > A[largest]) {
		largest = r;
	}
	if (largest != i) {
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		maxHeapify(largest);
	}
}

int main() {
	cin >> H;
	for (int i = 1; i <= H; i++) {
		cin >> A[i];
	}
	for (int i = H / 2; i >= 1; i--) {
		maxHeapify(i);
	}
	for (int i = 1; i <= H; i++) {
		printf(" %d", A[i]);
	}
	printf("\n");
}