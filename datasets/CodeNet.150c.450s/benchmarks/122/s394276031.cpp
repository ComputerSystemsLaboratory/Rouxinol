#include <iostream>
#include <vector>

using namespace std;

const int MAX = 2000000;

unsigned long long Heap[MAX];

int n = 0;

//必须自底向上的调用本函数 ，这样，每执行一次，底层的树依次会满足最大堆性质
void maxHeapify(int i) {
	int l = 2*i;
	int r = 2*i+1;
	int maxI = i;

	if (l <= n && Heap[maxI] < Heap[l]) {
		maxI = l;
	}

	if (r <= n && Heap[maxI] < Heap[r]) {
		maxI = r;
	}

	if (maxI != i) {
		unsigned long long t = Heap[i];
		Heap[i] = Heap[maxI];
		Heap[maxI] = t;
		maxHeapify(maxI);
	}
}

void maxHeap() {
	for (int i = n / 2; i>0; i--) {
		maxHeapify(i);
	}
}

int extract() {
	if (n > 0) {
		int q = Heap[1];

		//将最后一个元素放到开头，并重建堆
		Heap[1] = Heap[n];
		n--;
		maxHeapify(1);
		return q;
	}
	return -1;
}

void insert(unsigned long long key) {
	n++;
	Heap[n] = key;
	int i = n;
	int p = i / 2;
	//将新插入的元素移到适当位置 
	while (i > 1 && Heap[p] < Heap[i]) {
		//cout << "i==" << i <<"swap" << Heap[p]  << " "<< Heap[i] << endl;
		unsigned long long t = Heap[i];
		Heap[i] = Heap[p];
		Heap[p] = t;
		i = i / 2;
		p = i / 2;
	}
}

int main() {
	while (1) {
		string op;
		cin >> op;
		if (op == "insert") {
			unsigned long long k;
			cin >> k;
			insert(k);
		} else if (op == "extract") {
			cout << extract() << endl;
		} else if (op == "end") {
			break;
		}
	}
	return 0;

}
