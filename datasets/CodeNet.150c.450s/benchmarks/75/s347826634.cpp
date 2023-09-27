#include <iostream>

using namespace std;

#define MAX 500000

int H, T[MAX + 1];

void maxHeapify(int A[], int i) {
	int l = 2 * i, r = 2 * i + 1;
	int maxi = 0;
	if (l <= H && A[l] > A[i]) maxi = l;
	else maxi = i;
	if (r <= H && A[r] > A[maxi]) maxi = r;
	if (maxi != i) {
		swap(A[i], A[maxi]);
		maxHeapify(A, maxi);
	}
}

void buildMaxHeap(int A[]) {
	for (int i = H / 2; i > 0; --i) maxHeapify(A, i);
}

int main() {
	cin >> H;
	for (int i = 1; i <= H; ++i) {
		int key; cin >> key;
		T[i] = key;
	}
	buildMaxHeap(T);
	for (int i = 1; i <= H; ++i) {
		cout << " " << T[i];
	}
	cout << endl;

	return 0;
}
