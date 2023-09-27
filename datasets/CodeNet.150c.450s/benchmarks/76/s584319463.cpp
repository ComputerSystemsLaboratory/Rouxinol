#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	Node* parent;
	Node* left;
	Node* right;
};

Node* root_ptr = NULL;

void insert(int key)
{
	Node* x_ptr = root_ptr;
	Node* y_ptr = NULL;
	Node* z_ptr = new Node();
	z_ptr->key = key;

	while (x_ptr != NULL) {
		y_ptr = x_ptr;
		if (z_ptr->key < x_ptr->key) x_ptr = x_ptr->left;
		else x_ptr = x_ptr->right;
	}
	z_ptr->parent = y_ptr;

	if (y_ptr == NULL) root_ptr = z_ptr;
	else {
		if (z_ptr->key < y_ptr->key) y_ptr->left = z_ptr;
		else y_ptr->right = z_ptr;
	}
}

bool find(int key)
{
	Node* ptr = root_ptr;
	while (ptr != NULL) {
		if (key < ptr->key) ptr = ptr->left;
		else if (ptr->key < key) ptr = ptr->right;
		else return true;
	}
	return false;
}

// 左部分木->根->右部分木
void print_inorder(Node* ptr)
{
	if (ptr == NULL) return;
	print_inorder(ptr->left);
	cout << " " << ptr->key;
	print_inorder(ptr->right);
}

// 根->左部分木->右部分木
void print_preorder(Node* ptr)
{
	if (ptr == NULL) return;
	cout << " " << ptr->key;
	print_preorder(ptr->left);
	print_preorder(ptr->right);
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "insert") {
			int key;
			cin >> key;
			insert(key);
		}
		else if (cmd == "find") {
			int key;
			cin >> key;
			if (find(key)) cout << "yes" << endl;
			else cout << "no" << endl;
		}
		else {
			print_inorder(root_ptr);	cout << endl;
			print_preorder(root_ptr);	cout << endl;
		}
	}
}
