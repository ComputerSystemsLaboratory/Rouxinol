#include<iostream>
#include<utility>
using namespace std;

int n;

int left(int i) {return 2 * i;}
int right(int i) {return 2 * i + 1;} 

void maxHeapify(int H[], int i) {
	int l = left(i);
	int r = right(i);
	int largest = i;
	if (l <= n && H[l] > H[largest]) largest = l;
	if (r <= n && H[r] > H[largest]) largest = r;

	if (largest != i) {
		swap(H[i], H[largest]); //i??¨largest?????????????????????????????????????????????????????????
		maxHeapify(H, largest); 
	}
}

void buildMaxHeap(int H[]) {
	for (int i = n / 2; i >= 1; i--) {
		maxHeapify(H, i);
	}
}

int main() {
	cin >> n;
	int H[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> H[i];
	} 

	buildMaxHeap(H);

	for (int i = 1; i <= n; i++) {
		cout << ' ' << H[i];
	}
	cout << endl;

	return 0;
}