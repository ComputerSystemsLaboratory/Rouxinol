#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define MAX 25
#define NIL -1
struct Node { int p, l, r; };
Node T[MAX];
int n;

void preorder(int u) {
	if (u == NIL) return;
	cout << " " << u;
	preorder(T[u].l);
	preorder(T[u].r);
}

void inorder(int u) {
	if (u == NIL) return;
	inorder(T[u].l);
	cout << " " << u;
	inorder(T[u].r);
}

void postorder(int u) {
	if (u == NIL) return;
	postorder(T[u].l);
	postorder(T[u].r);
	cout << " " << u;
}


int main() {
	int root=0;
	int id = 0;
	int lft, rght;
	cin >> n;
	for (int i = 0; i < n; i++) T[i].p = NIL;
	for (int i = 0; i < n; i++) {
		cin >> id >> lft >> rght;
		T[id].l = lft;
		T[id].r = rght;
		if(lft !=NIL) T[lft].p = id;
		if(rght!=NIL) T[rght].p = id;
	}
	for (int i = 0; i < n; i++) if (T[i].p == NIL) root = i;
	cout << "Preorder" << endl;
	preorder(root);
	cout << endl;
	cout << "Inorder" << endl;
	inorder(root);
	cout << endl;
	cout << "Postorder" << endl;
	postorder(root);
	cout << endl;

}