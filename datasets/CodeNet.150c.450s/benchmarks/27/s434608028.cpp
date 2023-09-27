#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

struct node{
	int key;
	node *right,*left,*parent;
};

node *root,*nil,*z;

void preorder(node *id){
	if(id == nil)return;
	cout << " " << id->key;
	preorder(id->left);
	preorder(id->right);
}

void inorder(node *id){
	if(id == nil)return;
	inorder(id->left);
	cout << " " << id->key;
	inorder(id->right);
}

void print(){
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
}

void insert(int k){
	node *p = nil;
	node *r = root;
	node *z = (node *)malloc(sizeof(node));
	z->key = k;
	z->left = nil;
	z->right = nil;
	while(r != nil){
		p = r;
		if(z->key < r->key){
			r = r->left;
		}else{
			r = r->right;
		}
	}
	z->parent = p;
	if(p == nil){
		root = z;
	}else if(z->key < p->key){
		p->left = z;
	}else{
		p->right = z;
	}
}

int main(void){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string order;
		int key;
		cin >> order;
		if(order == "print"){
			print();
		}else if(order == "insert"){
			cin >> key;
			insert(key);
		}
	}
}
