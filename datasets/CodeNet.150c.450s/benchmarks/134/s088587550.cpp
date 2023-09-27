#include <cstdio>
#include <algorithm>
using namespace std;
const int NIL = -1;

struct node {
	int parent;
	int left;
	int right;
};

node nodes[100000];

void preorder(int v) {
	if (v == NIL) return;
	printf(" %d", v);
	preorder(nodes[v].left);
	preorder(nodes[v].right);
}

void inorder(int v) {
	if (v == NIL) return;
	inorder(nodes[v].left);
	printf(" %d", v);
	inorder(nodes[v].right);
}

void postorder(int v) {
	if (v == NIL) return;
	postorder(nodes[v].left);
	postorder(nodes[v].right);
	printf(" %d", v);
}

int main()
{
	int n;
	for (int i = 0; i < 100000; ++i) {
		node &p = nodes[i];
		p.parent = NIL;
		p.left = NIL;
		p.right = NIL;
	}
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		int v, l, r;
		scanf("%d %d %d", &v, &l, &r);
		node &p = nodes[v];
		p.left = l;
		p.right = r;
		if (l != NIL) nodes[l].parent = v;
		if (r != NIL) nodes[r].parent = v;
	}

	int r = NIL;
	for (int i = 0; i < n; ++i) {
		if (nodes[i].parent == NIL) {
			r = i;
			break;
		}
	}
	printf("Preorder\n");
	preorder(r);
	printf("\nInorder\n");
	inorder(r);
	printf("\nPostorder\n");
	postorder(r);
	printf("\n");

	return 0;
}