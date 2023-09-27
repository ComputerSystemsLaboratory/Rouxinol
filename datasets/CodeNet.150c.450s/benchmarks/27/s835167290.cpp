#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

struct node{
	int key;
	node *left, *right, *parent;
};

node *root, *NIL;// 定义全局的根节点

void insert(int k){

	node *x,*y,*z;
	x = root;
	y = NIL;
	z = (node *)malloc(sizeof(node));

	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while(x!=NIL){
		y = x;
		if(k<x->key){
			x = x->left;
		}
		else{
			x = x->right;
		}
	}

	z->parent = y;

	if(y==NIL){
		root = z;
	}
	else{
		if(k < y->key){
			y->left = z;
		}else{
			y->right = z;
	}
	}
	
}

void preorder(node *z){
	if(z==NIL) return;
	cout<<" "<<z->key;
	preorder(z->left);
	preorder(z->right);
}

void inorder(node *z){
	if(z==NIL) return ;
	inorder(z->left);
	cout<<" "<<z->key;
	inorder(z->right);
}

int main(){
	int n, tem;
	string A;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>A;
		if(A=="insert"){
			cin>>tem;
			insert(tem);
		}
		else{
			inorder(root);
			cout<<endl;
			preorder(root);
			cout<<endl;

		}
	}
	
	return 0;
}



