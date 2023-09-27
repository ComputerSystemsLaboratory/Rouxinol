// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <cstdio>
#define NMAX 25
#define NIL -1

struct Node {
	int parent, left, right;
};

struct Node T[NMAX];

void preOrderPrint(int idx) {
	if (idx == NIL) return;
	printf(" %d", idx);
	preOrderPrint(T[idx].left);
	preOrderPrint(T[idx].right);
}

void inOrderPrint(int idx) {
	if (idx == NIL) return;
	inOrderPrint(T[idx].left);
	printf(" %d", idx);
	inOrderPrint(T[idx].right);
}

void postOrderPrint(int idx) {
	if (idx == NIL) return;
	postOrderPrint(T[idx].left);
	postOrderPrint(T[idx].right);
	printf(" %d", idx);
}

int main() {
	int n, idx, left, right, root;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) T[i].parent = NIL;
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &idx, &left, &right);
		T[idx].left = left;
		T[idx].right = right;
		T[left].parent = T[right].parent = idx;
	}
	for (int i = 0; i < n; i++) if (T[i].parent == NIL) root = i;

	printf("Preorder\n");
	preOrderPrint(root);

	printf("\nInorder\n");
	inOrderPrint(root);

	printf("\nPostorder\n");
	postOrderPrint(root);
	printf("\n");

	return 0;
}
