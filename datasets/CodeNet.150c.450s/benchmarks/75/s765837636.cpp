#include <iostream>

using namespace std;


//必须自底向上的调用本函数 ，这样，每执行一次，底层的树依次会满足最大堆性质 
void maxHeapify(int *Heap,int n,int i) {
	int l = 2*i;
	int r = 2*i+1;
	int maxI = i;
	if (l <= n && Heap[maxI]<Heap[l]) {
		maxI = l;
	}
	
	if (r <= n && Heap[maxI] < Heap[r]) {
		maxI = r;
	}
	
	if (maxI != i) {
		int t = Heap[i];
		Heap[i] = Heap[maxI];
		Heap[maxI] = t; 
		maxHeapify(Heap,n,maxI);
	}
}

void maxHeap(int *Heap,int n) {
	for (int i = n / 2;i>0;i--) {
		maxHeapify(Heap,n,i);
	}
} 
int main() {
	int n;
	cin >> n;
	int *Heap = new int[n+1]; 
	for (int i=1;i<=n;i++) {
		cin >> Heap[i];
	}
	maxHeap(Heap,n);
	for (int i=1;i<=n;i++) {
		cout << " ";
		cout << Heap[i];
		if (i == n) {
			cout << endl;
		}
	}
	delete[] Heap;
	return 0;
	
}
