#include<iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;

int T[500001];
int n;

void maxHeapify(int i) {
    int largest;
	int l = 2 * i;
	int r = 2 * i + 1;
	if (l <= n && T[l] > T[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r <= n && T[r] > T[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(T[i], T[largest]);
		maxHeapify(largest);
	}
}


int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> T[i];
	}
	for (int i = n / 2; i >= 1; i--) {
		maxHeapify(i);
	}
	for (int i = 1; i <= n; i++) {
		cout << " " << T[i];
	}
	cout << endl;
}

