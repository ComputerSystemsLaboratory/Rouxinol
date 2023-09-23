#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 2000000

int H, A[MAX + 1];
void maxHeap(int k) {
	int l, t, Largest;
	l = 2 * k;
	t = 2 * k + 1;

	if (l <= H && A[l] > A[k]) Largest = l;
	else Largest = k;
	if (t <= H && A[t] > A[Largest]) Largest = t;

	if (Largest != k) {
		swap(A[k], A[Largest]);
		maxHeap(Largest);
	}
}
int main() {
	cin >> H;
	for (int i = 1; i <= H; i++) cin >> A[i];
	for (int i = H / 2; i >= 1; i--) maxHeap(i);
	for (int i = 1; i <= H; i++) {
		cout << " " << A[i];
	}
	cout << endl;
}
