#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#define NILL 2000000010
using namespace std;

struct tree{
	int key;
	tree *r,*l,*p;
};

tree *root,*NIL;

void insert(int k){
	tree *x=root,*y=NULL,*z;
	z = (tree *)malloc(sizeof(tree));
	z->key = k;
	z->l=NULL,z->r=NULL;
	while( x != NULL ){
		y = x;
		if(z->key < x->key ){
			x = x->l;
		} else {
			x = x->r;
		}
	}
	z->p = y;
	if( y == NULL ){
		root = z;
	} else {
		if( z->key > y->key ){
			y->r = z;
			z->p = y;
		} else {
			y->l = z;
			z->p = y;
		}
	}
}

void inorder(tree *u){
	if( u == NULL ) return;
	inorder(u->l);
	printf(" %d",u->key);
	inorder(u->r);
}

void preorder(tree *u){
	if( u == NULL ) return;
	printf(" %d",u->key);
	preorder(u->l);
	preorder(u->r);
}

void find(int x){
	tree *u = root;
	while( u != NULL){
		if(u->key == x){
			printf("yes\n");
			return;
		}
		if(u->key > x) u=u->l;
		else u=u->r;
	}
	printf("no\n");
	return;
}

int main(){
	int i,n,j,x;
	string com;
	cin >> n;
	root = NULL;
	while(n--){
		cin >> com;
		if( com == "insert" ){
			cin >> x;
			insert(x);
		}else if( com == "print" ){
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		} else if( com == "find" ){
			cin >> x;
			find(x);
		}
	}
}
