#include <iostream>
#include <string>
#include <cstdio>
#include <stdlib.h>
using namespace std;

struct node{
	int key;
	node *parent, *left, *right;
};

node *root, *NIL;

void insert(int k){
	node *x, *y, *z;

	x = root;
	y = NIL;
	z = (node *)malloc(sizeof(node));

	z->key = k;
	z->left =NIL;
	z->right = NIL;

	while(x!=NIL){
		y = x;
		if(k<x->key){
			x = x->left;
		}else{
			x = x->right;
		}
	}

	if(y==NIL){
		root = z;
	}else{
		z->parent = y;
		if(y->key<k) y->right = z;
		else y->left = z;
	}
}

node *find(int x){
	node *z = root;
	while(z!=NIL && z->key!=x){
		if(x<z->key) z = z->left;
		else z = z->right;
	}
	return z;
}

void inorder(node *z){
	if(z==NIL) return;
	inorder(z->left);
	cout<<" "<<z->key;
	inorder(z->right);
}

void preorder(node *z){
	if(z==NIL) return;
	cout<<" "<<z->key;
	preorder(z->left);
	preorder(z->right);
}

int main(){
	int n, tem;
	string a;
	cin>>n;

	while(cin>>a){
		if(a == "insert"){
			cin>>tem;
			insert(tem);
		}
		if(a == "find"){
			cin>>tem;
			if(find(tem)!=NIL) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		if(a == "print"){
			inorder(root);
			cout<<endl;
			preorder(root);
			cout<<endl;
		}
	}
}
