#include<iostream>
#include<string>
using namespace std;

static const int MAX = 2000001;

int n = 0;
int H[MAX];

void maxHeapify(int i) {
	int l = 2 * i;
	int r = 2 * i + 1;
	int largest = i;
	if (l <= n && H[l] > H[largest]) largest = l;
	if (r <= n && H[r] > H[largest]) largest = r;

	if (largest != i) {
		swap(H[i], H[largest]); 
		maxHeapify(largest); 
	}
}

void insert(int key) {
	H[++n] = key;
	int i = n;
	while (i > 1 && H[i] > H[i / 2]) {
		swap(H[i], H[i / 2]);
		i /= 2;
	}
}

void extract() {
	cout << H[1] << endl;
	swap(H[1], H[n--]);
	maxHeapify(1);
}

int main() {
	string cmd;
	int key;
	while (1) {
		cin >> cmd;
		if (cmd == "insert") {
			cin >> key;
			insert(key);
		} else if (cmd == "extract") {
			extract();
		} else if (cmd == "end") {
			break;
		}
	}

	return 0;
}