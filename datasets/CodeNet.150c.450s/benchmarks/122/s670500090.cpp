#include <iostream>
#include <string>
using namespace std;

static const int cMaxNumber = 500001;

void maxHeapify(int array[], int interRoNode, int array_size) {
	int left = 2 * interRoNode;
	int right = 2 * interRoNode + 1;

	//?????§??????????????????????????¶
	int largestNodeNumber;
	if (left <= array_size && array[left] > array[interRoNode])
		largestNodeNumber = left;
	else
		largestNodeNumber = interRoNode;
	if (right <= array_size && array[right] > array[largestNodeNumber])
		largestNodeNumber = right;

	//?????????????????§??????????????\????????????
	if (largestNodeNumber != interRoNode) {
		swap(array[largestNodeNumber], array[interRoNode]);
		maxHeapify(array, largestNodeNumber, array_size);
	}
}

void buildMaxHeap(int array[], int array_size) {
	for (int i = array_size / 2; i >= 1; i--)
		maxHeapify(array, i, array_size);
}

class PriorityQueue {
public:
	PriorityQueue() {
		cur_size_ = 0;
	}

	//add
	void insert(int key) {
		cur_size_++;
		array_[cur_size_] = -(1 << 30);
		increaseKey(cur_size_, key);
	}

	//remove
	int heapExtractMax() {
		if (cur_size_ < 1) return 0;
		int key = array_[1];

		array_[1] = array_[cur_size_];
		cur_size_--;
		maxHeapify(array_, 1, cur_size_);
		return key;
	}

private:
	void increaseKey(int i, int key) {
		if (key < array_[i]) return;
		array_[i] = key;

		while (i > 1 && array_[i / 2] < array_[i]) {
			swap(array_[i], array_[i / 2]);
			i = i / 2;
		}
	}

	int array_[2000001];
//	int max_size;
	int cur_size_;
};

int main() {
	PriorityQueue pq;

	while (1) {
		//string s;
		//cin >> s;
		char s[10];
		cin >> s;

		if (s[0] == 'i') {
			int key;
			cin >> key;
			pq.insert(key);
		}
		else if (s[0] == 'e') {
			if (s[1] == 'n')
				break;
			int key;
			key = pq.heapExtractMax();
			cout << key << endl;
		}
	}

	return 0;
}