#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

#define SIZE 1000000
int A[SIZE], H;

int parent(int x) { return x / 2; }
int left(int x) { return x * 2; }
int right(int x) { return x * 2 + 1; }

void insertKey(int i,int key)
{
	for (A[i] = key; i > 1 && A[parent(i)] < A[i]; i = parent(i))
		swap(A[parent(i)], A[i]);
}

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

int extractMax()
{
	int max = A[1];
	A[1] = A[H];
	H--;

	maxHeapify(1);

	return max;
}

int main()
{
	H = 0;
	char order[20];
	int flg = 1, key;

	while (flg)
	{
		scanf("%s", order);
		switch (order[2])
		{
		case 'd': //end
			flg = 0;
			break;
		case 's': //insert key
			scanf("%d", &key);
			insertKey(++H, key);
			
			break;
		case 't': //extract
			if (H > 0) printf("%d\n", extractMax());			
			break;
		/*case 'i':
			for (int i = 1; i <= H; i++)
				printf(" %d", A[i]);
			printf("\n");
			break;*/
		default:
			break;
		}
	}
	return 0;
}