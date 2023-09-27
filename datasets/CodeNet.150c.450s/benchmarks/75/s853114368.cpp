#include<iostream>
using namespace std;
int a[500000];
int i;
int h;
void maxheapify(int i) {
	int largest;
	int l = i * 2 + 1;
	int r = i * 2 + 2;
	if (l < h&&a[i] < a[l]) {
		largest = l;
	}
	else largest = i;
	if (r < h&&a[largest] < a[r]) {
		largest = r;
	}
	if (largest != i) {
		swap(a[largest], a[i]);
		maxheapify(largest);
	}


}
void builedMaxheap() {
	for (int j = h / 2; j >= 0; j--) {
		maxheapify(j);
	}
}
int main() {
	cin >> h;
	for (int k = 0; k < h; k++) {
		cin >> a[k];
	}
	builedMaxheap();
	for (int k = 0; k < h; k++) {
		cout << " " << a[k];
	}
	cout << endl;
	return 0;
}