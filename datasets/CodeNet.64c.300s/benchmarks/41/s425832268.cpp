#include<iostream>
#include<stdio.h>
#include<utility>
#define MAX 500002
using namespace std;
int parent(int i) {
	return i / 2;
}

int left(int i) {
	return 2 * i;
}

int right(int i) {
	return (2 * i) + 1;
}

int H;

void maxHeapify(int A[], int i,int H) {
	int l = left(i);
	int r = right(i);
	int largest;
	
	//左の子、自分、右の子で値が最大のノードを選ぶ
	if (l < H + 1 && A[l] > A[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r < H + 1 && A[r] > A[largest]) {
		largest = r;
	}
	if (largest != i) {		//iの子の方が値が大きい場合
		swap(A[i], A[largest]);
		maxHeapify(A, largest,H); //再帰的に呼び出し
	}
}

void buildMaxHeap(int A[],int H) {
	for (int i = H / 2; i >0; i--) {
		maxHeapify(A, i,H);
	}
	
}
int main() {
	int A[MAX], x;
	cin >>H;

	for(int j = 1; j < H + 1; j++) {
	    scanf("%d", &x);
		A[j] = x;
	}
	buildMaxHeap(A,H);

	for (int i = 1; i < H + 1; i++) {
		printf(" %d", A[i]);
	}
	printf("\n");
	return 0;
}
