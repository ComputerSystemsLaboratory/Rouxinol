#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)

int H, A[MAX];

void maxH(int i) {
	int l, r, largest;
	l = 2 * i;
	r = 2 * i + 1;

	if (l <= H && A[l] > A[i])largest = l;
	else largest = i;
	if (r <= H && A[r] > A[largest])largest = r;

	if (largest != i) {
		swap(A[i], A[largest]);
		maxH(largest);
	}
}

void heapI(int i, int key) {
	if (key < A[i])return;

	A[i] = key;
	while (i > 1 && A[i / 2] < A[i]) {
		swap(A[i], A[i / 2]);
		i = i / 2;
	}
}

void insert(int key) {
	H++;
	A[H] = -INFTY;
	heapI(H, key);
}

int extract() {
	if (H < 1)return 0;

	int max = A[1];
	A[1] = A[H];
	H--;
	maxH(1);

	return max;
}

int main() {
	int key;
	char com[10];

	while (1) {
		scanf(" %s", &com);
		if (com[0] == 'e' && com[1] == 'n')break;
		if (com[0] == 'i') {
			scanf("%d", &key);
			insert(key);
		}
		else {
			printf("%d\n", extract());
		}
	}
	return 0;
}
