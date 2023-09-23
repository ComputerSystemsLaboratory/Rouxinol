#include<iostream>
using namespace std;
#define MAX 500000

void max_heapify(int T[], int s, int i) {
	int left, right, largest;
	left = 2 * i;
	right = ( 2 * i ) + 1;
	if (left <= s && T[left] > T[i]) {
		largest = left;
	}
	else largest = i;
	if (right <= s && T[right] > T[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(T[i], T[largest]);
		max_heapify(T,s,largest);
	}
}

int main() {
	int s, T[MAX];
	cin >> s;
	for (int i = 1; i <= s; i++) {
		cin >> T[i];
	}
	for (int i = s / 2; i >= 1; i--) {
		max_heapify(T, s, i);
	}
	for (int i = 1; i <= s; i++) {
		cout << " " << T[i];
	}
	cout << endl;
	return 0;
}