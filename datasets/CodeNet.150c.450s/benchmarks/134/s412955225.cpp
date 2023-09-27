#include <iostream>
#include <cstdio>

#define MAX 10000
#define NIL -1

struct Node {
	int parent;
	int left;
	int right;
};

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u,int d)
{
	if(u == NIL) {
		return;
	}
	D[u] = d;

	setDepth(T[u].left, d + 1);
	setDepth(T[u].right, d + 1);
}


int setHeight(int u) 
{
	int h1, h2;
	h1 = h2 = 0;

	if (T[u].left != NIL) {
		h1 = setHeight(T[u].left) + 1;
	}
	if (T[u].right != NIL) {
		h2 = setHeight(T[u].right) + 1;
	}

	return H[u] = (h1 > h2) ? h1 : h2;
}

int getSibling(int u)
{
	if (T[u].parent == NIL) {
		return NIL;
	}

	if (T[T[u].parent].left != u && T[T[u].parent].left != NIL) {
		return T[T[u].parent].left;
	}

	if (T[T[u].parent].right != u && T[T[u].parent].right != NIL) {
		return T[T[u].parent].right;
	}


	return NIL;
}

void print(int u)
{
	printf("node %d: ",u);
	printf("parent = %d, ", T[u].parent);
	printf("sibling = %d, ", getSibling(u));

	int deg = 0;

	if (T[u].left != NIL) {
		deg++;
	}
	if (T[u].right != NIL) {
		deg++;
	}

	printf("degree = %d, ",deg);
	printf("depth = %d, ",D[u]);
	printf("height = %d, ", H[u]);
	
	if (T[u].parent == NIL) {
		printf("root\n");
	}
	else if (T[u].left == NIL && T[u].right == NIL) {
		printf("leaf\n");
	}
	else {
		printf("internal node\n");
	}
}


void preParse(int u) {
	if (u == NIL) {
		return;
	}

	printf(" %d",u);

	preParse(T[u].left);
	preParse(T[u].right);
}

void inParse(int u)
{
	if (u == NIL) {
		return;
	}

	inParse(T[u].left);
	printf(" %d",u);
	inParse(T[u].right);


}

void postParse(int u)
{
	if (u == NIL) {
		return;
	}

	postParse(T[u].left);
	postParse(T[u].right);
	printf(" %d",u);
}


int main(void)
{
	int v, l, r, root = 0;
	scanf("%d",&n);

	for (int i = 0; i < n; i++) {
		T[i].parent = NIL;
	}

	for (int i = 0; i < n; i++) {

	}

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d",&v,&l,&r);
		T[v].left = l;
		T[v].right = r;
		if (l != NIL) {
			T[l].parent = v;
		}
		if (r != NIL) {
			T[r].parent = v;
		}
	}

	for (int i = 0; i < n; i++) {
		if (T[i].parent == NIL) {
			root = i;
			break;
		}
	}

	setDepth(root, 0);
	setHeight(root);

	printf("Preorder\n");
	preParse(root);

	printf("\nInorder\n");
	inParse(root);

	printf("\nPostorder\n");
	postParse(root);
	putchar('\n');

	return 0;

}