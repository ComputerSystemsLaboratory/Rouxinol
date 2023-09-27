#include <iostream>

using namespace std;

struct Node
{
	int parent = -1;
	int left;
	int right;
} node[25];

void preorder(int id) {
	cout << " " << id;
	if (node[id].left != -1) {
		preorder(node[id].left);
	}
	if (node[id].right != -1) {
		preorder(node[id].right);
	}
}

void inorder(int id) {
	if (node[id].left != -1) {
		inorder(node[id].left);
	}
	cout << " " << id;
	if (node[id].right != -1) {
		inorder(node[id].right);
	}
}

void postorder(int id) {
	if (node[id].left != -1) {
		postorder(node[id].left);
	}
	if (node[id].right != -1) {
		postorder(node[id].right);
	}
	cout << " " << id;
}

int main() {
	int n, id, left, right, parent;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> id >> left >> right;
		node[id].left = left;
		node[id].right = right;
		node[left].parent = id;
		node[right].parent = id;
	}

	for (int i = 0; i < n; i++) {
		if (node[i].parent == -1) {
			parent = i;
			break;
		}
	}

	cout << "Preorder\n";
	preorder(parent);
	cout << "\nInorder\n";
	inorder(parent);
	cout << "\nPostorder\n";
	postorder(parent);
	cout << "\n";

	return 0;
}