#include <cstdio>
#include <iostream>

using namespace std;

struct Node {
	int p, l, r;
};

int NIL = -1;

void Preorder(Node T[], int u) {
	if (u == NIL)
		return;
	cout << " " << u;
	Preorder(T, T[u].l);
	Preorder(T, T[u].r);
}

void Inorder(Node T[], int u) {
	if (u == NIL)
		return;
	Inorder(T, T[u].l);
	cout << " " << u;
	Inorder(T, T[u].r);
}

void Postorder(Node T[], int u) {
	if (u == NIL)
		return;
	Postorder(T, T[u].l);
	Postorder(T, T[u].r);
	cout << " " << u;
}

int main() {

	int n;
	scanf("%d", &n);

	Node T[n];
	for (int i = 0; i < n; ++i)
		T[i].p = T[i].l = T[i].r = NIL;

	int id, left, right;
	for (int i = 0; i < n; ++i) {
		scanf("%d %d %d", &id, &left, &right);
		T[id].l = left;
		T[id].r = right;
		T[left].p = id;
		T[right].p = id;
	}

	int root;
	for (int i = 0; i < n; ++i) {
		if (T[i].p == NIL)
			root = i;
	}

	cout << "Preorder" << endl;
	Preorder(T, root);
	cout << endl;

	cout << "Inorder" << endl;
	Inorder(T, root);
	cout << endl;

	cout << "Postorder" << endl;
	Postorder(T, root);
	cout << endl;

	return 0;
}