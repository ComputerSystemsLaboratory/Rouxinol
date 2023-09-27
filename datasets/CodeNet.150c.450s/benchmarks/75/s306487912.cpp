#include <cstdio>
using namespace std;

#define SIZE 1000000
int A[SIZE], H;

int parent(int x) { return x / 2; }
int left(int x) { return x * 2; }
int right(int x) { return x * 2 + 1; }

void maxHeapify(int x)
{
	int l = left(x), r = right(x), max;

	if (l <= H&&A[l] > A[x]) max = l;
	else max = x;
	if (r <= H&&A[r] > A[max]) max = r;

	if (max != x) {
		int cmp = A[max];
		A[max] = A[x];
		A[x] = cmp;
		maxHeapify(max);
	}
}

int main()
{
	scanf("%d", &H);

	for (int i = 1; i <= H; i++)
		scanf("%d", &A[i]);

	for (int i = H / 2; i > 0; i--)
		maxHeapify(i);

	for (int i = 1; i <= H; i++)
		printf(" %d", A[i]);
	printf("\n");

	return 0;
}