#include <cstdio>
#include <cstdlib>
#pragma warning(disable : 4996)
struct Node {
	int key;
	Node *p, *l, *r;
};
Node *root;
void insert(int key_) {
	Node *x = root, *y = 0, *z;
	z = (Node*)malloc(sizeof(Node));
	z->key = key_, z->l = 0, z->r = 0;
	while (x) y = x, x = (z->key < x->key) ? x->l : x->r;
	z->p = y;
	if (!y) root = z;
	else if (z->key < y->key) y->l = z;
	else y->r = z;
}
bool find(int key_) {
	Node *x = root;
	while (x) {
		if (key_ < x->key) x = x->l;
		else if (key_ > x->key) x = x->r;
		else return true;
	}
	return false;
}
void walk1(Node *x) { if (!x) return; walk1(x->l); printf(" %d", x->key); walk1(x->r); }
void walk2(Node *x) { if (!x) return; printf(" %d", x->key); walk2(x->l); walk2(x->r); }
int n, v; char c[8];
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &c);
		if (c[0] == 'i') scanf("%d", &v), insert(v);
		else if (c[0] == 'f') scanf("%d", &v), printf("%s\n", find(v) ? "yes" : "no");
		else walk1(root), printf("\n"), walk2(root), printf("\n");
	}
	return 0;
}