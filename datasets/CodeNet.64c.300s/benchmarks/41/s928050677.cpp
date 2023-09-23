/*
 * ALDS1_9_B.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>
#include<algorithm>

using namespace std;


void maxHeapify(int* H, int n, int i) {
	int l = 2*i;
	int r = 2*i + 1;
	int largest = i;
	if(l <= n && H[l] > H[i]) {
		largest = l;
	}
	if(r <= n && H[r] > H[largest]) {
		largest = r;
	}
	if(largest != i) {
		swap(H[i], H[largest]);
		maxHeapify(H, n, largest);
	}
}

void buildMaxHeap(int* H, int n) {
	for(int i=n/2; i>0; i--) {
		maxHeapify(H, n, i);
	}
}

int main() {
	int n;
	int H[500001];

	cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> H[i];
	}

	buildMaxHeap(H, n);

	for(int i=1; i<=n; i++) {
		cout << " " << H[i];
	}
	cout << endl;
}



