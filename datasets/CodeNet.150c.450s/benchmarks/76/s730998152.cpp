#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

struct Node{
	int key;
	Node *parent,*left,*right;
};

Node *root,*NIL;//????????????NULL??§????????????????????????

void insert(int k);
void inorder(Node *u);
void preorder(Node *u);
Node* find(Node *x,int key);

int main(){
	int m; cin>>m;
	int key;
	string command;
	for(int i=0;i<m;i++){
		cin>>command;
		if(command=="insert"){
			cin>>key;
			insert(key);
		}else if(command=="print"){
			inorder(root);
			cout<<endl;
			preorder(root);
			cout<<endl;
		}else if(command=="find"){
			Node *x;
			cin>>key;
			x = find(root,key);
			if(x==NULL){
				cout<<"no"<<endl;
			}else if(x->key==key){
				cout<<"yes"<<endl;
			}
		}
	}
}

void insert(int k){
	Node *x,*y,*z;
	x = root,y = NIL;
	z = (Node *)malloc(sizeof(Node));
	z->key = k; z->left = z->right = NIL;

	while(x!=NIL){
		y = x;
		if(z->key<x->key)
			x = x->left;
		else
			x = x->right;
	}

	z->parent = y;

	if(y==NIL) root = z;
	else
		if(y->key>z->key)
			y->left = z;
		else
			y->right = z;
}

Node* find(Node *x,int key){
	while(x!=NIL&&x->key!=key){
		if(key<x->key){
			x = x->left;
		}else{
			x = x->right;
		}
	}
	return x;
}

void inorder(Node *u){
	if(u==NIL) return ;
	inorder(u->left);
	cout<<" "<<u->key;
	inorder(u->right);
}

void preorder(Node *u){
	if(u==NIL) return ;
	cout<<" "<<u->key;
	preorder(u->left);
	preorder(u->right);
}