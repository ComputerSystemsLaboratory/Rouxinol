#include <cstdio>
#include <cstring>
using namespace std;
int H;
int A[2000001];

const int INFTY = 2000000001;

void maxHeapify(int i) {
	int l = 2 * i;
	int r = 2 * i + 1;

	int largest = i;
	if (l <= H && A[l] > A[i])
		largest = l;

	if (r <= H && A[r] > A[largest])
		largest = r;

	if (largest != i) {
		int t = A[i];
		A[i] = A[largest];
		A[largest] = t;
		maxHeapify(largest);
	}
}

void heapIncreaseKey(int i, int key)
{
	if (key < A[i]) return;
	A[i] = key;
	while (i > 1 && A[i / 2] < A[i]) {
		int t = A[i];
		A[i] = A[i / 2];
		A[i / 2] = t;
		i = i / 2;
	}
}

void insert(int key) {
	H++;
	A[H] = - INFTY;
	heapIncreaseKey(H, key);
}

int heapExtractMax() {
	if (H < 1) return -1;
	int max = A[1];
	A[1] = A[H];
	H--;
	maxHeapify(1);
	return max;
}

int main()
{
	H = 0;
	char cmd[16];
	bool go = true;
	while(go) {
		int v;
		scanf("%s", cmd);
		if (strcmp(cmd, "insert") == 0) {
			scanf("%d", &v);
			insert(v);
		} else if (strcmp(cmd, "extract") == 0)
			printf("%d\n", heapExtractMax());
		else if (strcmp(cmd, "end") == 0)
			go = false;
	}
	return 0;
}