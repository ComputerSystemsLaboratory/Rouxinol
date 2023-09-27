#include<cstdio>
#include<iostream>
#define MAX 10000
#define NIL -1
using namespace std;
struct Node { int p, l, r; };
Node T[MAX];
int n;
void preParse(int u) {
	if (u == NIL)return;
	printf(" %d", u);
	preParse(T[u].l);
	preParse(T[u].r);
}
void inParse(int u) {
	if (u == NIL)return;
	inParse(T[u].l);
	printf(" %d", u);
	inParse(T[u].r);
}
void postParse(int u) {
	if (u == NIL)return;
	postParse(T[u].l);
	postParse(T[u].r);
	printf(" %d", u);
}
int main() {
	int i, v, l, r, root;
	cin >> n;
	for (i = 0; i < n; i++)T[i].p = NIL;
	for (i = 0; i < n; i++) {
		cin >> v >> l >> r;
		T[v].l = l;
		T[v].r = r;
		if (l != NIL)T[l].p = v;
		if (r != NIL)T[r].p = v;
	}
	for (i = 0; i < n; i++)if (T[i].p == NIL)root = i;
	puts("Preorder");
	preParse(root);
	puts("");
	puts("Inorder");
	inParse(root);
	puts("");
	puts("Postorder");
	postParse(root);
	puts("");
	return 0;
}