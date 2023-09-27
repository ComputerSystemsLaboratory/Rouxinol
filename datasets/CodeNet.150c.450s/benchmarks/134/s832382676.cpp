#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int parent;
	int child_left;
	int child_right;
};

void print_preorder(int id, const vector<Node> node)
{
	if (id == -1) return;
	cout << " " << id;
	print_preorder(node[id].child_left, node);
	print_preorder(node[id].child_right, node);
}

void print_inorder(int id, const vector<Node> node)
{
	if (node[id].child_left != -1) print_inorder(node[id].child_left, node);
	cout << " " << id;
	if (node[id].child_right != -1) print_inorder(node[id].child_right, node);
}

void print_postorder(int id, const vector<Node> node)
{
	if (node[id].child_left != -1) print_postorder(node[id].child_left, node);
	if (node[id].child_right != -1) print_postorder(node[id].child_right, node);
	cout << " " << id;
}

int main()
{
	int n;
	cin >> n;
	vector<Node> node(n);
	for (int i = 0; i < n; i++) {
		node[i].parent = -1;
		node[i].child_left = -1;
		node[i].child_right = -1;
	}

	for (int i = 0; i < n; i++) {
		int id, left, right;
		cin >> id >> left >> right;
		node[id].child_left = left;
		node[id].child_right = right;
		if (left != -1) node[left].parent = id;
		if (right != -1) node[right].parent = id;
	}

	int root = 0;
	for (int i = 0; i < n; i++) {
		if (node[i].parent == -1) root = i;
	}

	cout << "Preorder" << endl;
	print_preorder(root, node);
	cout << endl;

	cout << "Inorder" << endl;
	print_inorder(root, node);
	cout << endl;

	cout << "Postorder" << endl;
	print_postorder(root, node);
	cout << endl;
}
