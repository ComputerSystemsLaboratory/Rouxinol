#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int h;

vector<long long int> data(500010);

long long int left(long long int i) {
	return i*2;
}

long long int right(long long int i) {
	return i*2+1;
}

void maxHeapify(long long int i) {
	//cout << i << endl;
	long long int l = left(i);
	long long int r = right(i);
	long long int largest = l;
	if (l <= h && data[l] > data[i]) {
		largest = l;
	} else {
		largest = i;
	}
	//cout << i << endl;
	if (r <= h && data[r] > data[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(data[i], data[largest]);
		maxHeapify(largest);
	}
	//cout << i << endl;
}

void buildMaxHeap(void) {
	for (long long int i = h/2; i >= 1; i--) {
		maxHeapify(i);
	}
}

int main() {
	cin >> h;
	for (long long int i = 1; i <= h; i++) {
		cin >> data[i];
	}
	buildMaxHeap();
	for (long long int i = 1; i <= h; i++) {
		cout << ' ' << data[i];
	}
	cout << endl;
	return 0;
}