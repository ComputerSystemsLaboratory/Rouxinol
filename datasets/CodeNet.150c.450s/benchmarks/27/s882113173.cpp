#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

struct Node{
	int key;
	Node *l;
	Node *r;
	Node *p;
};
Node *nil = new Node{INT_MAX};

void insert(Node *T, int key){
	Node *z = new Node{key, nil, nil, nil};
	if(T->key == INT_MAX){
		*T = *z;
		return;
	}
	Node *x = T;
	Node *y = x->p;
	while(x != nil){
		y = x;
		x = (key < x->key) ? x->l : x->r;
	}
	z->p = y;
	if(key < y->key){
		y->l = z;
	}else{
		y->r = z;
	}
}

vector<int> pre, in;
void preorder(Node *node){
	pre.push_back(node->key);
	if(node->l != nil) preorder(node->l);
	if(node->r != nil) preorder(node->r);
}

void inorder(Node *node){
	if(node->l != nil) inorder(node->l);
	in.push_back(node->key);
	if(node->r != nil) inorder(node->r);
}

void print(vector<int> v){
	r(i, s(v))
		cout << ' ' << v[i];
	cout << endl;
}

void printPreorder(Node *node){
	preorder(node);
	print(pre);
	pre.clear();
}

void printInorder(Node *node){
	inorder(node);
	print(in);
	in.clear();
}

int main(){
	int m;
	cin >> m;

	Node *root = new Node{INT_MAX};
	string cmd;
	int arg;
	r(i, m){
		cin >> cmd;
		if(cmd[0] == 'i'){
			cin >> arg;
			insert(root, arg);
		}else{
			printInorder(root);
			printPreorder(root);
		}
	}

	return 0;
}
