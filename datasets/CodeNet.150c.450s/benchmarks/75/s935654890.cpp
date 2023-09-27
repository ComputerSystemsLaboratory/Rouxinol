#include <iostream>
#include <vector>

using namespace std; 

int H;
vector<int> A;

void maxHeapify(int ind) {
	int lar = ind;
	int l = (2*ind)+1;
	int r = l+1;
	if (l < H && A[l] > A[ind]) {
		lar = l;
	}
	if (r < H && A[r] > A[lar]) {
		lar = r;
	}

	if (lar != ind) {
		swap(A[ind],A[lar]);
		maxHeapify(lar);
	}
	return;
}

void buildMaxHeap() {
	for (int i = H/2; i >= 0; --i) {
		maxHeapify(i);
	}
	return;
}

int main(void) {
	cin >> H;
	A = vector<int>(H);
	for (int i = 0; i < H; ++i) {
		cin >> A[i];
	}
	buildMaxHeap();
	for (int i = 0; i < H; ++i) {
		cout << " " << A[i];
	}
	cout << endl;
	return 0;
}

