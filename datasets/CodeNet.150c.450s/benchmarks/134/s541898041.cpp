#include<stdio.h>
#define MAX 26
#define NIL -1


struct Node { int parent, leftChild, rightChild; };
Node T[MAX];

// root , left, right
void preOrder(int node) {
	if (node == NIL)
		return;
	printf(" %d", node);
	preOrder(T[node].leftChild);
	preOrder(T[node].rightChild);
}

// left, root, right
void inOrder(int node) {
	if (node == NIL){
		return;
	}
	inOrder(T[node].leftChild);
	printf(" %d", node);
	inOrder(T[node].rightChild);
}

//left, right, root
void postOrder(int node) {
	if (node == NIL){
		return;
	}
	postOrder(T[node].leftChild);
	postOrder(T[node].rightChild);
	printf(" %d", node);
}

void output(int root) {
	printf("Preorder\n");
	preOrder(root);
	printf("\nInorder\n");
	inOrder(root);
	printf("\nPostorder\n");
	postOrder(root);
	printf("\n");
}

int main() {
	int i, n, id, child_1, child_2, root;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		T[i].parent = NIL;

	for (i = 0; i < n; i++){
		scanf("%d %d %d", &id, &child_1, &child_2);
		T[id].leftChild = child_1;
		T[id].rightChild = child_2;

		if (child_1 != NIL)
			T[child_1].parent = id;
		if (child_2 != NIL)
			T[child_2].parent = id;
	}

	for (i = 0; i < n; i++) {
		if (T[i].parent == NIL) {
			root = i;
			break;
		}
	}

	output(root);

	return 0;
}