#include <iostream>
#include <vector>

class Node {
public:
	long key;
	int parent, left, right;
	Node() {
		key = -1;
		parent = left = right = -1;
	}
};

class CompleteBT {
public:
	int size;
	std::vector<long> heap;
	std::vector<Node> nodes;
	CompleteBT(int s, std::vector<long> inHeap) {
		heap = inHeap;
		size = s;
		Node n;
		nodes.assign(size, n);
	}
	void makeTree() {
		for (int i = 0; i < size; i++) {
			nodes[i].key = heap[i];
			if (i > 0) {
				nodes[i].parent = (i - 1) / 2;
			}
			if ((i + 1) * 2 - 1 < size) {
				nodes[i].left = (i + 1) * 2 -1;
			}
			if ((i + 1) * 2 < size) {
				nodes[i].right = (i + 1) * 2;
			}
		}
	}
};

void maxHeapify(const int i, std::vector<long> &heap) {
	int l = (i + 1) * 2 - 1; // 左の子
	int r = (i + 1) * 2; // 右の子
	int size = heap.size();

	int max = -1;
	if (l < size && heap[l] > heap[i]) {
		max = l;
	}
	else {
		max = i;
	}
	if (r < size && heap[r] > heap[max]) {
		max = r;
	}
	if (max != i) {
		long tmp = heap[i];
		heap[i] = heap[max];
		heap[max] = tmp;
		maxHeapify(max, heap);
	}
}

void buildMaxHeap(std::vector<long> &heap) {
	for (int i = (heap.size() - 1) / 2; i >= 0; i--) {
		maxHeapify(i, heap);
	}
}

void outputCBT(int size, const CompleteBT &tree) {
	for (int i = 0; i < size; i++) {
		std::cout << "node " << i + 1 << ": key = " << tree.nodes[i].key << ", ";
		if (tree.nodes[i].parent >= 0) {
			std::cout << "parent key = " << tree.nodes[tree.nodes[i].parent].key << ", ";
		}
		if (tree.nodes[i].left >= 0) {
			std::cout << "left key = " << tree.nodes[tree.nodes[i].left].key << ", ";
		}
		if (tree.nodes[i].right >= 0) {
			std::cout << "right key = " << tree.nodes[tree.nodes[i].right].key << ", ";
		}
		std::cout << std::endl;
	}
}

int main() {
	int size;
	std::cin >> size;
	std::vector<long> heap(size);
	for (int i = 0; i < size; i++) {
		std::cin >> heap[i];
	}

	buildMaxHeap(heap);

	//CompleteBT tree(size, heap);
	//tree.makeTree();

	//outputCBT(size, tree);
	for (int i = 0; i < size; i++) {
		std::cout << " " << heap[i];
	}
	std::cout << std::endl;
}
