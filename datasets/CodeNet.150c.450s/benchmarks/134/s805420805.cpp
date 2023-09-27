#include <stdio.h>

typedef struct{
	int parent;
	int left, right;
} Node;

Node tree[50];

void preorder_walk(int p) /* root -> left -> right */
{
	if (p >= 50 || p == -1) {
		return;
	}
	printf(" %d", p);
	preorder_walk(tree[p].left);
	preorder_walk(tree[p].right);
}
void inorder_walk(int p) /* left -> root -> right */
{
	if (p >= 50 || p == -1) {
		return;
	}
	inorder_walk(tree[p].left);
	printf(" %d", p);
	inorder_walk(tree[p].right);
}
void postorder_walk(int p) /* left -> right -> root */
{
	if (p >= 50 || p == -1) {
		return;
	}
	postorder_walk(tree[p].left);
	postorder_walk(tree[p].right);
	printf(" %d", p);
}

int main()
{
	int i;
	int n;
	int id, left, right;
	int p;
	for (i = 0; i < 50; i++) {
		tree[i].parent = -1;
	}

	scanf("%d", &n);

	/* construct tree */
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &id, &left, &right);
		tree[id].left = left;
		tree[id].right = right;
		if (left != -1) {
			tree[left].parent = id;
		}
		if (right != -1) {
			tree[right].parent = id;
		}
	}

	/* find root id */
	for (i = 0; i < n; i++) {
		if (tree[i].parent == -1) {
			p = i;
			break;
		}
	}

	/* preorder - walk */
	puts("Preorder");
	preorder_walk(p);
	printf("\n");

	/* inorder - walk */
	puts("Inorder");
	inorder_walk(p);
	printf("\n");

	/* postorder - walk */
	puts("Postorder");
	postorder_walk(p);
	printf("\n");
}