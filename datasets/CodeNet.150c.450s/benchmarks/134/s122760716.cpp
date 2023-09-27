#include<stdio.h>

#define MAX 10000
#define NIL -1

struct Node
{
	int p;
	int left;
	int right;
};

Node T[MAX];

// 先行順巡回（節点 -> 左部分木 -> 右部分木）
void preParse(int u)
{
	if (u == NIL) return;
	printf(" %d", u);
	preParse(T[u].left);
	preParse(T[u].right);
}

// 中間順巡回（左部分木-> 節点 -> 右部分木）
void inParse(int u)
{
	if (u == NIL) return;
	inParse(T[u].left);
	printf(" %d", u);
	inParse(T[u].right);
}

// 後行順巡回（左部分木 -> 右部分木-> 節点）
void postParse(int u)
{
	if (u == NIL) return;
	postParse(T[u].left);
	postParse(T[u].right);
	printf(" %d", u);
}

/*
(出力)
Preorder
 0 1 2 3 4 5 6 7 8
Inorder
 2 1 3 0 6 5 7 4 8
Postorder
 2 3 1 6 7 5 8 4 0
*/
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		T[i].p = NIL;
	}


	int p, l, r;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &p, &l, &r);
		T[p].left = l;
		T[p].right = r;
		if (l != NIL) T[l].p = p;
		if (r != NIL) T[r].p = p;
	}

	int root;
	for (int i = 0; i < n; i++)
	{
		if (T[i].p == NIL)
		{
			root = i;
			break;
		}
	}

	printf("Preorder\n");
	preParse(root);
	printf("\n");

	printf("Inorder\n");
	inParse(root);
	printf("\n");

	printf("Postorder\n");
	postParse(root);
	printf("\n");
}

/*
	  3
	／ ＼
   4     0		先行順 : 3 4 0 1 2
	   ／ ＼	中間順 : 4 3 1 0 2
	  1     2	後行順 : 4 1 2 0 3

				※重要なのは巡回先を部分木単位で捉えること
*/
