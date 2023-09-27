#include<iostream>

#define NIL -1
#define MAX 30

using namespace std;

struct Node {
	int parent, left, right;
};

Node node[MAX];

void preorder(int u) {
	if (u == NIL) return;

	cout << " " << u;
	preorder(node[u].left);
	preorder(node[u].right);
}

void inorder(int u) {
	if (u == NIL) return;
	inorder(node[u].left);
	cout << " " << u;
	inorder(node[u].right);
}

void postorder(int u) {
	if (u == NIL) return;
	postorder(node[u].left);
	postorder(node[u].right);
	cout << " " << u;
}

void init() {
	for (int i = 0; i < MAX; i++) {
		node[i].left = node[i].right = node[i].parent = NIL;
	}
}

signed main() {
	int n;
	int id, l, r;
	cin >> n;
	init();
	for (int i = 0; i < (int)n; i++) {
		cin >> id >> l >> r;
		node[id].left = l;
		node[id].right = r;

		if (l != NIL) node[l].parent = id;
		if (r != NIL) node[r].parent = id;
	}

	int root = 0;
	for (int i = 0; i < (int)n; i++) {
		if (node[i].parent == NIL) {
			root = i;
			break;
		}
	}
	cout << "Preorder" << endl;
	preorder(root);
	cout << "\n";
	cout << "Inorder" << endl;
	inorder(root);
	cout << "\n";
	cout << "Postorder" << endl;
	postorder(root);
	cout << "\n";

}