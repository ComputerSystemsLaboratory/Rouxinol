#include<stdio.h>
#define MAX 2000000
#define INFTY 1<<30

int A[MAX + 1]; // 1オリジン
int H; // 要素数

void maxHeapify(int i)
{
	int v = A[i];
	int parent = i;

	int cl, cr, child;
	while (true)
	{
		cl = parent * 2;
		cr = parent * 2 + 1;

		if (cl > H) break;

		if (cr <= H && A[cl] < A[cr])
		{
			child = cr;
		}
		else
		{
			child = cl;
		}

		if (v >= A[child]) break;
		A[parent] = A[child];
		parent = child;
	}
	A[parent] = v;
}

// 最大値を取り出して、ヒープを再構築する
int extract()
{
	int x = A[1];
	A[1] = A[H];
	H = H - 1;
	maxHeapify(1);
	return x;
}

// 要素iのキー値を指定のキー値に増やす
void increaseKey(int i, int key)
{
	if (A[i] >= key) return;

	int v = key;
	int c = i;
	while (c / 2 > 0 && A[c / 2] < v)
	{
		A[c] = A[c / 2];
		c = c / 2;
	}
	A[c] = v;
}

// 指定のキー値をヒープに挿入(追加)する
void insert(int key)
{
	H = H + 1;
	A[H] = -1 * INFTY;
	increaseKey(H, key);
}

int main()
{
	H = 0;

	char com[20];
	int key;
	while (true)
	{
		scanf("%s%d", com, &key);
		if (com[0] == 'i')
		{
			insert(key);
		}
		else if (com[0] == 'e'&&com[1] == 'x')
		{
			printf("%d\n", extract());
		}
		else
		{
			break;
		}
	}
}
