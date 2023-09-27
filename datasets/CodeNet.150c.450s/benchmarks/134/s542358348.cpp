#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 1000
#define NIL -1

struct Node{
	int p, l, r;
}T[MAXN];

int n;

void preOrder(int u){
	if (u == NIL) {
		return;
	}
	printf(" %d", u);
	preOrder(T[u].l);
	preOrder(T[u].r);
}

void inOrder(int u){
	if (u == NIL) {
		return;
	}
	inOrder(T[u].l);
	printf(" %d", u);
	inOrder(T[u].r);
}

void postOrder(int u){
	if (u == NIL) {
		return;
	}
	postOrder(T[u].l);
	postOrder(T[u].r);
	printf(" %d", u);
}

int main(int argc, char *argv[]) {
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		T[i].p = NIL;
	}
	
	int v, l, r;
	for (int i = 0; i < n; i++) {
		
		scanf("%d %d %d", &v, &l, &r);
		T[v].l = l;
		T[v].r = r;
		if (l != NIL) {
			T[l].p = v;
		}
		if (r != NIL) {
			T[r].p = v;
		}
	}
	int root = 0;
	for (int i = 0; i < n; i++) {
		if (T[i].p == NIL) {
			root = i;
		}
	}
	//printf("%d %d\n", root, T[root].p);
	printf("Preorder\n");
	preOrder(root);
	printf("\n");
	printf("Inorder\n");
	inOrder(root);
	printf("\n");
	printf("Postorder\n");
	postOrder(root);
	printf("\n");
	return 0;
}
