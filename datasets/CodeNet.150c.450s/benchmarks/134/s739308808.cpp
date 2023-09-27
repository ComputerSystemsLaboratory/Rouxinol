#include<stdio.h>
#include<iostream>
using namespace std;

#define NILL -1
#define MAX 10000

struct ID { int parent, left, right; };
struct ID id[MAX];

void preParse(int u) {
	if (u == NILL) return;
	printf(" %d", u);
	preParse(id[u].left);
	preParse(id[u].right);
}

void inParse(int u) {
	if (u == NILL)return;
	inParse(id[u].left);
	printf(" %d", u);
	inParse(id[u].right);
}

void postParse(int u) {
	if (u == NILL)return;
	postParse(id[u].left);
	postParse(id[u].right);
	printf(" %d", u);
}

int main()
{
	int n, i, v, l, r, root;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		id[i].parent = NILL;
	}

	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &v, &l, &r);
		id[v].left = l;
		id[v].right = r;
		if (l != NILL)id[l].parent = v;
		if (r != NILL)id[r].parent = v;
	}

	for (i = 0; i < n; i++)if (id[i].parent == NILL)root = i;

	printf("Preorder\n");
	preParse(root);
	printf("\n");
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	printf("Postorder\n");
	postParse(root);
	printf("\n");

	return 0;
}
