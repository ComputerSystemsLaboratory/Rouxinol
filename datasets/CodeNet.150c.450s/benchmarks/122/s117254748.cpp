#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)
int h, a[MAX + 1];
void maxHeapify(int i) {
	int l, r, largest;
	l = 2 * i;
	r = 2 * i + 1;
	if (l <= h&&a[l] > a[i])largest = l;
	else largest = i;
	if (r <= h&&a[r] > a[largest])largest = r;
	if (largest != i) {
		swap(a[i], a[largest]);
		maxHeapify(largest);
	}
}
int extract() {
	int maxv;
	if (h < 1)return -INFTY;
	maxv = a[1];
	a[1] = a[h--];
	maxHeapify(1);
	return maxv;
}
void increaseKey(int i, int key) {
	if (key < a[i])return;
	a[i] = key;
	while (i > 1 && a[i / 2] < a[i]) {
		swap(a[i], a[i / 2]);
		i = i / 2;
	}
}
void insert(int key) {
	h++;
	a[h] = -INFTY;
	increaseKey(h, key);
}
int main() {
	int key;
	string com;
	while (1) {
		cin >> com;
		if (com[0] == 'e'&&com[1] == 'n')break;
		if (com[0] == 'i') {
			cin >> key;
			insert(key);
		}
		else {
			cout << extract() << endl;
		}
	}
	return 0;
}