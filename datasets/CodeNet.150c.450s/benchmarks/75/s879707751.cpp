#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

#define MAX_H 500001
void maxHeapify(int *in, int &root, int &h) {
	int l_idx = root * 2;
	int r_idx = root * 2 + 1;
	int largest = root;
	if (l_idx <= h && in[l_idx] > in[root]) largest = l_idx;
	if (r_idx <= h && in[r_idx] > in[largest]) largest = r_idx;
	if (largest != root) {
		swap(in[root], in[largest]);
		maxHeapify(in, largest, h);
	}
	return;
}

int main() {
	int h = 0;
	scanf("%d", &h);
	int in[MAX_H] = { 0 };
	for (int i = 1; i <= h; i++) {
		scanf("%d", &in[i]);
	}
	for (int i = h / 2; i >= 1; i--) {
		maxHeapify(in, i, h);
	}
	for (int i = 1; i <= h; i++) {
		printf(" %d", in[i]);
	}
	printf("\n");
	return 0;
}