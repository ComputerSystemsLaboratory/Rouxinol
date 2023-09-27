/*
 * ALDS1_9_C.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<cstdio>
#include<algorithm>

int size = 0;

void insert(int* H, int k) {
	size++;
	H[size] = k;
	int h = size;
	while(h/2 > 0 && H[h/2] < H[h]){
		std::swap(H[h/2], H[h]);
		h /= 2;
	}
}

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
		std::swap(H[i], H[largest]);
		maxHeapify(H, n, largest);
	}
}

void extractMax(int* H) {
	if(size == 0) return;
	printf("%d\n", H[1]);
	H[1] = H[size];
	size--;
	maxHeapify(H, size, 1);
}

int main() {
	int H[2000001];

	char s[10];
	int k;
	while(true) {
		scanf("%s", s);
		if(s[2] == 'd') break;
		if(s[0] == 'i') {
			scanf("%d", &k);
			insert(H, k);
		}
		else extractMax(H);
	}
}

