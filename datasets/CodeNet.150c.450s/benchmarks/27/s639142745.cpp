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
	if (z_ptr == NULL) {
		cout << "記憶域の確保に失敗しました。" << endl;
		return;
	}
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
		else {
			print_inorder(root_ptr);	cout << endl;
			print_preorder(root_ptr);	cout << endl;
		}
	}
}
