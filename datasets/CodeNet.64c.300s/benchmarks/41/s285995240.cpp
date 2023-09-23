#include <iostream>

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

void maxHeapify(int* A, int i, int H)
{
	int l = 2*i;   // left child
	int r = 2*i+1; // right child
	
	int largest;
	if (l <= H && A[l] > A[i]) largest = l;
	else largest = i;
	if (r <= H && A[r] > A[largest]) largest = r;
	
	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(A, largest, H);
	}
}

void buildMaxHeap(int* A, int H)
{
	for (int i=H/2; i>=1; i--) maxHeapify(A, i, H);
}

int main()
{
	int H; std::cin >> H;
	
	int* heap = new int[H+1];
	
	for (int i=1; i<=H; i++) std::cin >> heap[i];
	
	buildMaxHeap(heap, H);
	
	for (int i=1; i<=H; i++) std::cout << " " << heap[i];
	std::cout << std::endl;
	
	delete[] heap;
	
	return 0;
}

