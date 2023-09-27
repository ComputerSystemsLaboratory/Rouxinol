#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define NIL -1
#define N 100005

struct Node{ int p, l, r; };

Node T[N];
int n, D[N], H[N];

void preorder(int u){
	if (NIL == u) return;
	printf(" %d", u);
	preorder(T[u].l);
	preorder(T[u].r);
}

void inorder(int u){
	if (NIL == u) return;
	inorder(T[u].l);
	printf(" %d", u);
	inorder(T[u].r);
}

void postorder(int u){
	if (NIL == u) return;
	postorder(T[u].l);
	postorder(T[u].r);
	printf(" %d", u);
}


int main()
{
	int i, root;

	cin >> n;
	for (int i = 0; i < n; ++i) T[i].p = NIL;

	for (int i = 0; i < n; ++i){
		int u, l, r; cin >> u >> l >> r;
		T[u].l = l;
		T[u].r = r;
		if (NIL != l) T[l].p = u;
		if (NIL != r) T[r].p = u;
	}

	for (int i = 0; i < n; ++i) if (NIL == T[i].p) root = i;

	printf("Preorder\n");
	preorder(root);
	printf("\n");

	printf("Inorder\n");
	inorder(root);
	printf("\n");

	printf("Postorder\n");
	postorder(root);
	printf("\n");

	return 0;
}