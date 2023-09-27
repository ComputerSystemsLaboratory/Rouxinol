#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <set>
using namespace std;

struct Node{
	int key;
	Node *parent,*left,*right;
};

Node *root,*NIL;
set<int> S;

void print_inorder(){
	for(set<int>::iterator it=S.begin();it!=S.end();it++)
		cout<<" "<<*it;
	cout<<endl;
}

void insert(int k){
	Node *y=NIL;
	Node *x=root;
	Node *z;
	z=(Node *)malloc(sizeof(Node));//随机分配区域节省内存 
	//先进行初始化 
	z->key=k;
	z->left=NIL;
	z->right=NIL;
	
	while(x!=NIL){
		y=x;
		if(z->key<x->key){
			x=x->left;
		}	
		else{
			x=x->right;
		}
	}
	z->parent=y;
	if(y==NIL){
		root=z;
	} 
	else{
		if(z->key<y->key){
			y->left=z;
		} 
		else{
			y->right=z;
		}
	}
}

void print_preorder(Node* u){
	if(u==NIL)
		return;
	cout<<" "<<u->key;
	print_preorder(u->left);
	print_preorder(u->right);
}

int main(){
	int n;
	cin>>n;
	string com;
	int k;

	for(int i=0;i<n;i++){
		cin>>com;
		if(com=="insert"){
			cin>>k;
			S.insert(k);
			insert(k);
		}
		else if(com=="print"){
			print_inorder();
			print_preorder(root);
			cout<<endl;
		}
	} 
	
	return 0;
}
