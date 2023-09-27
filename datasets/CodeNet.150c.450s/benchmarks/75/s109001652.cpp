#include<cstdio>

#define MAX 2000000

int A[MAX + 1]; // 1オリジン
int H; // 要素数

// 節点iを根とする部分木がmaxヒープになるようA[i]の値を下降させる
void maxHeapify(int i)
{
	int v = A[i];
	int p = i;

	while (true)
	{
		int cl = p * 2;
		int cr = p * 2 + 1;

		if (cl > H) break;

		int child;
		if (cr <= H && A[cl] < A[cr])
		{
			child = cr;
		}
		else
		{
			child = cl;
		}

		if (v >= A[child])break;

		A[p] = A[child];
		p = child;
	}
	A[p] = v;
}

/*
要素1から順に出力する
 16 14 10 8 7 9 3 2 4 1
*/
int main()
{
	scanf("%d", &H);
	for (int i = 1; i <= H; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int i = H / 2; i >= 1; i--)
	{
		maxHeapify(i);
	}
	for (int i = 1; i <= H; i++)
	{
		printf(" %d", A[i]);
	}
	printf("\n");
}
