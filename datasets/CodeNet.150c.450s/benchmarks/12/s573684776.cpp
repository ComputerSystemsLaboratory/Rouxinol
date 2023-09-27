#include<stdio.h>
#define MAX 100000

int A[MAX + 1];
int H; // 要素数

int parent(int i)
{
	return i / 2;
}

int left(int i)
{
	return i * 2;
}

int right(int i)
{
	return i * 2 + 1;
}

/*
node 2: key = 8, parent key = 7, left key = 2, right key = 3,
#行の最後は空白
#親、左の子、右の子はなければ出力しない
*/
int main()
{
	scanf("%d", &H);
	for (int i = 1; i <= H; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 1; i <= H; i++)
	{
		printf("node %d: ", i);
		printf("key = %d, ", A[i]);
		int p = parent(i);
		int l = left(i);
		int r = right(i);
		if (p > 0)
		{
			printf("parent key = %d, ", A[p]);
		}
		if (l <= H)
		{
			printf("left key = %d, ", A[l]);
		}
		if (r <= H)
		{
			printf("right key = %d, ", A[r]);
		}
		printf("\n");
	}
}

/*
二分ヒープ(Binary Heap)とは、完全二分木の各節点に割り当てられたキーが
配列の各要素に対応して表されたデータ構造。

二分ヒープには以下の種類がある。
maxヒープ : 節点のキーがその親のキー以下
minヒープ : 節点のキーがその親のキー以上
*/
