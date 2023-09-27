#include <iostream>
#include <algorithm>
#include <cstdio>
#include <list>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <ostream>
#include <cstring>
#include <cmath>
#include <string>
#include <queue>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <iomanip>

#define N 30
#define INF (1 << 30)
#define NIL -1
using namespace std;
struct Node { int parent, lchild, rchild; } T[N];
void pre_order(int root)
{
	if (root == NIL)
		return;
	printf(" %d", root);
	pre_order(T[root].lchild);
	pre_order(T[root].rchild);
}
void in_order(int root)
{
	if (root == NIL)
		return;
	
	in_order(T[root].lchild);
	printf(" %d", root);
	in_order(T[root].rchild);
}
void post_order(int root)
{
	if (root == NIL)
		return;

	post_order(T[root].lchild);
	
	post_order(T[root].rchild);
	printf(" %d", root);
}
int main()
{
	int n, id, k, lchild, rchild;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		T[i].parent = NIL;
	}
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &id);
		scanf("%d %d", &T[id].lchild, &T[id].rchild);
		if (T[id].lchild != NIL)
		{
			T[T[id].lchild].parent = id;
		}
		if (T[id].rchild != NIL)
		{
			T[T[id].rchild].parent = id;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (T[i].parent == NIL)
		{
			puts("Preorder");
			pre_order(i);
			puts("\nInorder");
			in_order(i);
			puts("\nPostorder");
			post_order(i);
			putchar('\n');
		}
	}
	return 0;
}