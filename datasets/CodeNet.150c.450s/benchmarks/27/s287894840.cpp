#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define NIL -2000000001

struct Node {
	int key;
	int left = NIL;
	int right = NIL;
};

Node tree[500000];

void preorder(int s) {
	if (s != NIL) {
		cout << " " << tree[s].key;
		if (tree[s].left != NIL) {
			preorder(tree[s].left);
		}
		if (tree[s].right != NIL) {
			preorder(tree[s].right);
		}
	}
}

void inorder(int s) {
	if (s != NIL) {
		if (tree[s].left != NIL) {
			inorder(tree[s].left);
		}
		cout << " " << tree[s].key;
		if (tree[s].right != NIL) {
			inorder(tree[s].right);
		}
	}
}

void insert(int s) {
	int y = NIL;
	int x = 0;

	while (x != NIL) {
		y = x;
		if (tree[s].key < tree[x].key) {
			x = tree[x].left;
		}
		else {
			x = tree[x].right;
		}
	}

	if (s == 0) {
		return;
	}

	if (tree[s].key < tree[y].key) {
		tree[y].left = s;
	}
	else {
		tree[y].right = s;
	}
}

int main() {
	int n, value;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "insert") {
			cin >> value;
			tree[i].key = value;
			insert(i);
		}
		else if (str == "print") {
			inorder(0);
			cout << endl;
			preorder(0);
			cout << endl;
		}
	}

	return 0;
}