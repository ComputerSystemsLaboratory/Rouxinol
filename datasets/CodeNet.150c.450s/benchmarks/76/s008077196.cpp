#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

class node{
public:
	int id;
	node* left, * right;
	node*  parent;
	int sibling;
	int depth;
	int height;
};

bool operator<=(node a, node b) {
	return a.id <= b.id;
}
bool operator<(node a, node b) {
	return a.id < b.id;
}

bool operator==(node a, node b) {
	return a.id == b.id;
}

bool operator!=(node a, node b) {
	return a.id != b.id;
}

void add(node** root,int a) {
	node *newnode = new node;
	node* now = *root;
	newnode->id = a;
	newnode->left = NULL;
	newnode->right = NULL;
	if (now == NULL) {
		newnode->parent = NULL;
		*root = newnode;
		return;
	}
	while (1) {
		if (now->id > a) {
			if (now->left == NULL) {
				now->left = newnode;
				newnode->parent = now;
				return;
			}
			else {
				now = now->left;
			}
		}
		else {
			if (now->right == NULL) {
				now->right = newnode;
				newnode->parent = now;
				return;
			}
			else {
				now = now->right;
			}
		}
	}
}


string postorder(node* nod) {
	string msg="";
	if (nod->left->id != -1) {
		msg += postorder(nod->left);	
	}
	if (nod->right->id != -1) {
		msg += postorder(nod->right);	
	}
	msg += to_string(nod->id) + " ";
	return msg;
}

void preorder(node* root) {
	if (root == NULL)return;
	cout << " "<<root->id;
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (root == NULL)return;
	inorder(root->left);
	cout <<" "<< root->id;
	inorder(root->right);
}

bool find(node* root,int a) {
	if (root == NULL)return false;
	if (root->id == a)return true;
	if (root->id > a)return find(root->left, a);
	if (root->id < a)return find(root->right, a);
}



int main() {
	int n,tmp;
	string msg;
	cin >> n;
	node* root = NULL;
	for (int i = 0;i < n;i++) {
		cin >> msg;
		if (msg == "insert") {
			cin >> tmp;
			add(&root, tmp);
		}
		else if (msg == "print") {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		else {
			cin >> tmp;
			if (find(root, tmp))cout << "yes\n";
			else cout << "no\n";
		}
	}
}




