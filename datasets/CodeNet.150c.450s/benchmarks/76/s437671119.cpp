#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;



// ここからプロトタイプ宣言
void insert(int k);
Node* find(Node *u, int k);
void inOrder(Node *u);
void preOrder(Node *u);
// ここまでプロトタイプ宣言

int main(){
	int n;	cin>>n;
	string com;

	int x;
	for(int i=0;i<n;i++){
		cin>>com;
		if(com=="insert"){
			cin>>x;
			insert(x);
		}else if(com=="print"){
			inOrder(root);
			printf("\n");
			preOrder(root);
			printf("\n");
		}else if(com[0]=='f'){
			cin>>x;
			Node *t = find(root,x);
			if(t!=NIL)
				printf("yes\n");
			else
				printf("no\n");
			
		}
	}

	return 0;
}


//---------------------//
void insert(int k){
	Node *y = NIL;	// xの親
	Node *x = root;
	Node *z;

	z = (Node*)malloc(sizeof(Node));
	// コレないとエラー。　コレ何してる？

	z -> key = k;
	z -> left = NIL;
	z -> right = NIL;

	while(x != NIL){
		y=x;

		if(z->key < x->key){
			x = x->left;
		}else{
			x = x->right;
		}
		// このループで、z の親を探してる？
		// 見つけた親を、y に代入？
	}

	z->parent = y;
	if(y==NIL){
		root=z;

	}else{
		// ノード挿入

		if(z->key < y->key){
			y->left = z;
		}else{
			y->right = z;
		}
	}
}

void inOrder(Node *u){
	if(u==NIL)return;

	inOrder(u->left);
	printf(" %d",u->key);
	inOrder(u->right);
}

void preOrder(Node *u){
	if(u==NIL)return;

	printf(" %d",u->key);
	preOrder(u->left);
	preOrder(u->right);
}


Node* find(Node *u , int k){
	while(u!=NIL && k != u->key){
		if(k > u->key){
			u=u->right;
		}else{
			u=u->left;
		}
	}
	return u;
}

