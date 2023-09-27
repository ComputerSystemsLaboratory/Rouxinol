#include <iostream>
using namespace std;
#define MAX 500001

int heap[MAX];
int sizeOfHeap;

int getLeft(int node) {
	return node * 2;
}

int getRight(int node) {
	return node * 2 + 1;
}

void swapValue(int a, int b){
	int tmp = heap[a];
	heap[a] = heap[b];
	heap[b] = tmp;
}

void maxHeapify(int currNode) {
	int left = getLeft(currNode);
	int right = getRight(currNode);
	int largest;
	// pick out the largest one among currNode and its child nodes
	if (left <= sizeOfHeap && heap[left] > heap[currNode])
		largest = left;
	else
		largest = currNode;
	if (right <= sizeOfHeap && heap[right] > heap[largest])
		largest = right;

	if (largest != currNode){
		swapValue(currNode, largest);
		maxHeapify(largest);
	}
}

void buildMaxHeap() {
	for (int i = sizeOfHeap / 2; i >= 1 ; i-- ) {
		maxHeapify(i);
	}
}

int main(){

	cin >> sizeOfHeap;

	for( int i = 1; i <= sizeOfHeap ; i++) {
		cin >> heap[i];
	}

	buildMaxHeap();

	for( int i = 1; i <= sizeOfHeap ; i++) {
		cout << " " << heap[i];
	}
	cout << endl;

	return 0;
}