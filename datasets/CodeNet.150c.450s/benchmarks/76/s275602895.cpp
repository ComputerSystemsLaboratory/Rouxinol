#include <iostream>

using namespace std;

typedef struct Node {
	int val;
	Node *parent = NULL;
	Node *left = NULL;
	Node *right = NULL;
} Node;


Node *Tree = NULL; //树 

void insert(int key) {
	Node *cur = Tree;
	Node *parent = NULL;
	while (cur != NULL) {
		parent = cur;
		if (key < cur->val) {
			cur = cur->left;
		} else {
			cur = cur->right;
		}
	}
	if (parent == NULL) {
		Tree = new Node;
		Tree->val = key;
		return;
	}
	Node *t = new Node;
	t->val = key;
	t->parent = parent;
	if (key < parent->val) {
	   parent->left = t;
    } else {
    	parent->right = t;
	}
}

void find(int key) {
	Node *cur = Tree;
	bool found = false;
	while (cur != NULL && !found) {
		if (key < cur->val) {
			cur = cur->left;
		} else if (key > cur->val) {
			cur = cur->right;
		} else {
			found = true;
		}
	}
	if (found) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
	
}

void printPre(Node * node) {
	cout  << " " << node->val;
	if (node->left != NULL) {
		printPre(node->left);
	}
	
	if (node->right != NULL) {
		printPre(node->right);
	}
}

void printIn(Node * node) {

	if (node->left != NULL) {
		printIn(node->left);
	}
	cout  << " " << node->val;
	if (node->right != NULL) {
		printIn(node->right);
	}
}

int main() {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		string s;
		cin >> s;
		if (s[0] == 'i') {
			long long key;
			cin >> key;
			insert(key);
		} else if (s[0] == 'f') {
			long long key;
			cin >> key;
			find(key);
		} else if (s[0] == 'p') {
			printIn(Tree);
			cout << endl;
			printPre(Tree);
			cout << endl;
		}
	}
	return 0;
	
}
