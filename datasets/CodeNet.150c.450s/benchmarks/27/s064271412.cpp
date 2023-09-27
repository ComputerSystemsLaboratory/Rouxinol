#include<iostream>
#include<string>
using namespace std;
struct Node {
	int key;
	Node* left, * right, * parent;
};
Node* root, * NILL;
void insert(int k) {
	Node *p = NILL;
	Node *id = root;
	Node* z;
	z = new Node;
	z->key = k;
	z->left = NILL;
	z->right = NILL;
	while (id != NILL) {
		p = id;
		if (z->key < id->key) {
			id = id->left;
		}
		else {
			id = id->right;
		}
	}
	z->parent=p;
	if (p == NILL) {
		root=z;
	}
	else if (z->key < p->key) {
		p->left = z;
	}
	else if (z->key > p->key) {
		p->right = z;
	}
}
void Preorder(Node* u) {
	if (u == NILL) return;
	else {
		cout << " " << u->key;
		Preorder(u->left);
		Preorder(u->right);
	}
}
void Inorder(Node* u) {
	if (u == NILL) return;
	else {
		Inorder(u->left);
		cout << " " << u->key;
		Inorder(u->right);
	}

}
int main() {
	int n,value;
	string command;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "insert") {
			cin >> value;
			insert(value);
		}
		else if (command == "print") {
			Inorder(root);
			cout<<endl;
			Preorder(root);
			cout<<endl;
		}
	}
	return 0;
}
