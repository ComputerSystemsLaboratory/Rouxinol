#include<iostream>

constexpr int MINUS_INF = -1;
constexpr int MAX_SIZE = 2000000;

using namespace std;

void maxHeapify(int*, int index, int n);

void maxHeapAndDelete(int*, int index, int n);

int main() {
	int cnt = 0,tmp;
	int* a = new int[MAX_SIZE + 1];
	string msg;
	cin >> msg;
	while (msg != "end") {
		if (msg[0] == 'i') {
			cin >> tmp;
			cnt++;
			a[cnt] = tmp;
			maxHeapify(a, cnt, cnt);
		}
		else {
			if (cnt > 0) {
				cout << a[1] << endl;
				a[1] = MINUS_INF;
				maxHeapAndDelete(a, 1, cnt);
				cnt--;
			}
		}
		cin >> msg;
	}
}

void maxHeapify(int* a, int index,int n) {
	int l = 2 * index;
	int r = l + 1;
	int largest = index;
	if (l <= n) {
		if (a[l] > a[index]) {
			largest = l;
		}
	}
	if (r <= n) {
		if (a[r] > a[largest]) {
			largest = r;
		}
	}
	if (largest != index) {
		swap(a[index], a[largest]);
		maxHeapify(a, largest, n);
	}
	if (index != 1 && a[index/2]<a[index]) {
		swap(a[index], a[index / 2]);
		maxHeapify(a, index / 2, n);
	}
}

void maxHeapAndDelete(int* a, int index, int n) {
	int l = 2 * index;
	int r = l + 1;
	int largest = index;
	if (l <= n) {
		if (a[l] > a[index]) {
			largest = l;
		}
	}
	if (r <= n) {
		if (a[r] > a[largest]) {
			largest = r;
		}
	}
	if (largest != index) {
		swap(a[index], a[largest]);
		maxHeapAndDelete(a, largest, n);
	}else if (index != 1 && a[index / 2] < a[index]) {
		swap(a[index], a[index / 2]);
		maxHeapAndDelete(a, index / 2, n);
	}
	else if (index * 2 > n) {
		swap(a[index], a[n]);
		maxHeapify(a, index, n);
	}

}
