#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define MAX 2000000
#define INFTY (1<<30)
using namespace std;

int H, A[MAX + 1];

inline int parent(int i) { return i / 2; }
inline int right(int i) { return 2 * i + 1; }
inline int left(int i) { return 2 * i; }

void maxHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int largest;
	if (l <= H && A[l] > A[i])  largest = l;
	else  largest = i;
	if (r <= H && A[r] > A[largest])  largest = r;

	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(largest);
	}
}

int extract() {
	if (H < 1) return -1;
	int max = A[1];
	A[1] = A[H];
	H--;
	maxHeapify(1);
	return max;
}

void increaseKey(int i, int key) {
	if (A[i] > key) return;
	A[i] = key;
	while (i > 1 && A[parent(i)] < A[i]) {
		swap(A[parent(i)], A[i]);
		i = parent(i);
	}
}

void insert(int key) {
	H++;
	A[H] = -INFTY;
	increaseKey(H, key);
}

int main() {
	string input;
	string cmd;
	int key;
	stringstream ss;
	while (getline(cin,input) && input!="end") {
		ss << input;
		ss >> cmd;
		if (cmd == "insert") {
			ss >> key;
			insert(key);
		}
		else if (cmd == "extract") {
			cout << extract() << endl;
		}
		else if (cmd == "end") {
			break;
		}
		ss.clear(stringstream::goodbit);
	}
}