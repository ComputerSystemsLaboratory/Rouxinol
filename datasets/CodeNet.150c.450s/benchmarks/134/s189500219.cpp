#include <bits/stdc++.h>
using namespace std;

static const int NIL = -1;

struct Node {
	int parent;
	int left;
	int right;
	Node(int parent = NIL, int left = NIL, int right = NIL): parent(parent), left(left), right(right) {}
};

vector<Node> T;

void prePerse(int u)
{
	if (u == NIL) return;
	printf(" %d", u);
	prePerse(T[u].left);
	prePerse(T[u].right);
}

void inPerse(int u)
{
	if (u == NIL) return;
	inPerse(T[u].left);
	printf(" %d", u);
	inPerse(T[u].right);
}

void postPerse(int u)
{
	if (u == NIL) return;
	postPerse(T[u].left);
	postPerse(T[u].right);
	printf(" %d", u);
}

int main()
{
	int n;
	scanf("%d", &n);
	
	T.resize(n);
	
	for (int i = 0; i < n; i++){
		int v, l, r;
		scanf("%d %d %d", &v, &l, &r);
		T[v].left = l;
		T[v].right = r;
		if (l != NIL) T[l].parent = v;
		if (r != NIL) T[r].parent = v;
	}
	
	int root;
	for (int i = 0; i < n; i++){
		if (T[i].parent == NIL) root = i;
	}
	
	printf("Preorder\n");
	prePerse(root);
	printf("\n");
	
	printf("Inorder\n");
	inPerse(root);
	printf("\n");
	
	printf("Postorder\n");
	postPerse(root);
	printf("\n");
	
	return 0;
}