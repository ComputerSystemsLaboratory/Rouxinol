#include <cstdio>

#define parent(x) (x - 1) / 2
#define left(x) 2 * x + 1
#define right(x) 2 * x + 2

int A[500005], H;

void maxHeapify(int i)
{
	int l = left(i);
	int r = right(i);

	if (l >= H) return;
	else if (r >= H)
	{
		if (A[i] < A[l])
		{
			int temp = A[i];
			A[i] = A[l];
			A[l] = temp;
		}
		else return;
	}
	else
	{
		if (A[i] >= A[l] && A[i] >= A[r]) return;
		int large = A[l] > A[r] ? l : r;
		int temp = A[i];
		A[i] = A[large];
		A[large] = temp;
		maxHeapify(large);
	}
}

int main()
{
	scanf("%d", &H);
	for (int i = 0; i < H; i++)
		scanf("%d", &A[i]);
	for (int i = H - 1; i >= 0; i--)
		maxHeapify(i);
	for (int i = 0; i < H; i++)
	{
		//if (i == 0)
			//printf("%d", A[i]);
		printf(" %d", A[i]);
	}
	printf("\n");
	return 0;
}
