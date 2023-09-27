#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using v1 = vector<int>;
using v2 = vector<vector<int>>;
using v3 = vector<vector<char>>;

struct Node{
	int key;
	Node* parent;
	Node* left;
	Node* right;
};

Node* root;
Node* NIL;

void insert(int key){
	Node* x = root;
	Node* y = NIL;
	Node* z;
	z = (Node*)malloc(sizeof(Node));
	z->key = key;
	z->left = NIL;
	z->right = NIL;
	while(x != NIL){
		y = x;
		if(x->key < z->key){
			x = x->right;
		}else{
			x = x->left;
		}
	}
	z->parent = y;
	if(y == NIL){
		root = z;
	}else{
		if(y->key > z->key){
			y->left = z;
		}else{
			y->right = z;
		}
	}
}

void find(int key, Node* x){
	if(x == NIL){
		cout << "no" << endl;
		return;
	}
	if(x->key == key){
		cout << "yes" << endl;
		return;
	}
	if(x->key > key){
		find(key, x->left);
	}else{
		find(key, x->right);
	}
}

void preorder(Node* x){
	cout << " " << x->key;
	if(x->left != NIL) preorder(x->left);
	if(x->right != NIL) preorder(x->right);
}

void inorder(Node* x){
	if(x->left != NIL) inorder(x->left);
	cout << " " << x->key;
	if(x->right != NIL) inorder(x->right);
}

int main(){
	int n;
	cin >>n;
	rep(i,n){
		string s;
		int k;
		cin >> s;
		if(s[0] == 'i'){
			cin >> k;
			insert(k);
		}
		if(s[0] == 'p') {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		if(s[0] == 'f'){
			cin >> k;
			find(k, root);
		}
	}
}

