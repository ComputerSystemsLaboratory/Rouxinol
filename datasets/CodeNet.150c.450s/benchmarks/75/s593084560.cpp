// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <iostream>
using namespace std;
#define MAX 500000

int N, H[MAX + 1];

void maxHeapify(int ix) {
	int max = ix, l = ix * 2, r = l + 1;

	if ((l <= N) && (H[l] > H[max])) max = l;
	if ((r <= N) && (H[r] > H[max])) max = r;

	if (max != ix) {
		swap(H[ix], H[max]);
		maxHeapify(max);
	}
}

void buildMaxHeap() {
	for (int i = N / 2; i >= 1; i--) maxHeapify(i);
}

int main() {

	cin >> N;
	for (int i = 1; i <= N; i++) cin >> H[i];

	buildMaxHeap();

	for (int i = 1; i <= N; i++) cout << " " << H[i];
	cout << endl;

	return 0;
}
