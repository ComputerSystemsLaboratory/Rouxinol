#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
	Node *y = NIL;
	Node *x = root;
	Node *z;
	
	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	
	while(x != NIL){
		y = x;
		if(z->key < x->key){
			x = x->left;
		} else {
			x = x->right;
		}
	}
	z->parent = y;
	if( y == NIL){
		root = z;
	} else {
		if(z->key < y->key){
			y->left = z;
		} else {
			y->right = z;
		}
	}
}

void inorder(Node *u){
	if( u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}

void preoder(Node *u){
	if( u == NIL) return;
	printf(" %d", u->key);
	preoder(u->left);
	preoder(u->right);
}

int main(){
	int n;
	string s;
	
	cin>>n;
	
	for(int i = 0; i < n; i++){
		cin>>s;
		if(s == "print"){
			inorder(root);
			cout<<endl;
			preoder(root);
			cout<<endl;
		} else{
			int x;
			cin>>x;
			insert(x);
		}
	}
	
	return 0;
}
