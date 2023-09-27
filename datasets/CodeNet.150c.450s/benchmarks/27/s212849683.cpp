#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

struct Node{
	int key;
	Node *parent;
	Node *left;
	Node *right; 
};
Node *root, *NIL;
void insert(int k){
	Node *x = root,*y = NIL,*z;
	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	while(x!=NIL){
		y = x;
		if(z->key<x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if(y==NIL)
		root = z;
	else{
		if(z->key<y->key)
			y->left = z;
		else
			y->right = z;
	}
}
void pre(Node *n){
	if(n==NIL) return;
	printf(" %d",n->key);
	pre(n->left);
	pre(n->right);
}
void in(Node *n){
	if(n==NIL) return;
	in(n->left);
	printf(" %d",n->key);
	in(n->right);
}
int main() {
	int n,x;
	char s[10];
	scanf("%d",&n);
	while(n--){
        scanf("%s",s);
		if(s[0]=='i'){
			scanf("%d",&x);
			insert(x);
		}else{
			in(root);
			printf("\n");
			pre(root);
			printf("\n");
		}
	}
	return 0;
}
