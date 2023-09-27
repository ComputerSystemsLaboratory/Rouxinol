//C++の難しさ
#include <iostream>
#include <stdio.h>
#define N_MAX 500000
using namespace std;
//thik&solve easy 
//オブジェクトは変数でありその変数に記録されたデータそのもののことだ

int n;//num of input

class node{//将来を見据えて動的にしています
public:
	int *key;
	node *parent;
	node *l_chld;
	node *r_chld;

	node(int n){
		key =new int(n);
		parent = NULL;
		l_chld = NULL;
		r_chld = NULL;
	}

	~node(){
		delete key;
		delete parent;
		delete l_chld;
		delete r_chld;
	}
};

void insert(node **root,node *z){
	node *y;
	node *x;
	y = NULL;
	x = *root;
	while(x != NULL){
		y = x;
		if(*(z->key) < *(x->key))
			x = x->l_chld;
		else
			x = x->r_chld;
		z->parent = y;
	}

	if(y == NULL)
		*root = z;
	else if(*(z->key) < *(y->key))
		y->l_chld = z;
	else
		y->r_chld = z;
	
}

void preorder(node* u){
	node* pos;
	cout <<" " <<*(u->key);

	if(u->l_chld != NULL){
		pos = u->l_chld;
		preorder(pos);
	}

	if(u->r_chld != NULL){
		pos = u->r_chld;
		preorder(pos);
	}
}

void inorder(node* u){
	node* pos;
	
	if(u->l_chld != NULL){
		pos = u->l_chld;
		inorder(pos);
	}
	cout <<" " <<*(u->key);

	if(u->r_chld != NULL){
		pos = u->r_chld;
		inorder(pos);
	}
}

void print(node *u){
	inorder(u);
	cout <<endl;

	preorder(u);
	cout <<endl;

}

int main(){
	//はじめはrootがNULL

	char type[100];
	int z;
	node* root;
	root = NULL;
	node** rtroot = &root;

	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",&type);
		if(type[0] == 'i'){
			scanf("%d",&z);

			//挿入するわけだから新しくオブジェクトを作成
			node *nd;
			nd = new node(z);

			insert(rtroot,nd);
		}else
			print(root);
	}

	return 0;
}