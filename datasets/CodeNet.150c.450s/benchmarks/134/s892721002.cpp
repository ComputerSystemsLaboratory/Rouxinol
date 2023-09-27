#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

struct Node { int p, l, r; };

Node *u;

void Preorder(int id) {
	if (id == -1) return;
	cout << " " << id;
	Preorder(u[id].l);
	Preorder(u[id].r);
}

void Inorder(int id) {
	if (id == -1) return;
	Inorder(u[id].l);
	cout << " " << id;
	Inorder(u[id].r);
}

void Postorder(int id) {
	if (id == -1) return;
	Postorder(u[id].l);
	Postorder(u[id].r);
	cout << " " << id;
}

int main() {
	int n;
	cin >> n;
	u = new Node[n];

	for (int i = 0; i < n; i++)
		u[i].p = u[i].l = u[i].r = -1;
	for (int i = 0; i < n; i++) {
		int id, l, r;
		cin >> id >> l >> r;
		u[id].l = l;
		u[id].r = r;
		if (l != -1) u[l].p = id;
		if (r != -1) u[r].p = id;
	}
	int root = 0;
	cout << "Preorder" << endl;
	for (root = 0; root < n; root++)
		if (u[root].p == -1) {
			Preorder(root);
			break;
		}
	cout << endl;
	cout << "Inorder" << endl;
	Inorder(root);
	cout << endl;
	cout << "Postorder" << endl;
	Postorder(root);
	cout << endl;

	delete[] u;
	return 0;
}