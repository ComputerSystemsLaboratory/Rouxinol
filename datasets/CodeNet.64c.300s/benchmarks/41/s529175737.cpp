#include<iostream>
#include<cstdio>

using namespace std;

int left(int i) {
	return 2 * i;
}
int right(int i) {
	return 2 * i + 1;
}

int H;
int C[1000000];
void maxHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int largest;
		// 左の子、自分、右の子で値が最大のノードを選ぶ
	if (l <= H && C[l] > C[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r <= H && C[r] > C[largest]) {
		largest = r;
	}

	if (largest != i) { // i の子の方が値が大きい場合
		swap(C[i], C[largest]);//A[i] と A[largest] を交換
		maxHeapify(largest); // 再帰的に呼び出し
	}
}

void buildMaxHeap(int A[]) {
	for (int i = H / 2;i >= 1; i--) {
		maxHeapify(i);
	}
}

int main() {
	cin >> H;

	for (int i = 1; i <= H;i++) {
		cin >> C[i];
	}

	/*for (int i = H / 2; i > 0; i--) {
		maxHeapify(i);
	}

	for (int i = 1; i <= H; i++) {
		cout << C[i] << " ";
	}*/

	buildMaxHeap(C);

	for (int i = 1; i <= H; i++) {
		cout <<" "<< C[i];
	}
	
	cout << endl;

	return 0;
}
