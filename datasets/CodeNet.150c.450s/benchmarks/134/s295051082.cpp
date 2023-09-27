#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#define MAX 10000
#define NIL -1
using namespace std;

struct Node
{
	int parent, left, right;
};
Node T[MAX];
int n;

void Preorder(int u)
{
	if (u == NIL)
	{
		return;
	}
	cout << ' ' << u;
	Preorder(T[u].left);
	Preorder(T[u].right);
}
void Inorder(int u)
{
	if (u == NIL)
	{
		return;
	}
	Inorder(T[u].left);
	cout << ' ' << u;
	Inorder(T[u].right);
}
void Postorder(int u)
{
	if (u == NIL)
	{
		return;
	}
	Postorder(T[u].left);
	Postorder(T[u].right);
	cout << ' ' << u;
}

int main()
{
	int v, l, r, root = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		T[i].parent = NIL;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &v, &l, &r);
		T[v].left = l;
		T[v].right = r;
		if (l != NIL)
		{
			T[l].parent = v;
		}
		if (r != NIL)
		{
			T[r].parent = v;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (T[i].parent == NIL)
		{
			root = i;
		}
	}
	cout << "Preorder" << endl;
	Preorder(root);
	cout << endl;
	cout << "Inorder" << endl;
	Inorder(root);
	cout << endl;
	cout << "Postorder" << endl;
	Postorder(root);
	cout << endl;
	return 0;
}
