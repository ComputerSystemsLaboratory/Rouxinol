#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
struct node{
	int key;
	node *parent,*left,*right;
};
node *NIL,*root;

void inorder(struct	node *u){
	if(u==NIL)return;
	inorder(u->left);
	printf(" %d",u->key);
	inorder(u->right);
}
void preorder(struct node *u){
	if(u==NIL)return;
	printf(" %d",u->key);
	preorder(u->left);
	preorder(u->right);
}
void pr(){
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
}
void insert(int key){
	node *y = NIL;
	node *x = root;
	node *z;
	z = (node *)malloc(sizeof(node));
	z->key = key;
	z->left = NIL;
	z->right = NIL;
	
	while(x!=NIL){//when x==NIL break
		y = x;
		if(z->key < x->key)x = x->left;
		else x = x->right;
	}
	z->parent = y;
	if(y == NIL)root = z;//z became root,insert root
	else if(z->key < y->key)y->left = z;
	else y->right = z;
}
node * find(node *u,int k){
	while((u != NIL) && (k != u->key)){	
	//when you exchange the position of '(u != NIL)' with '(k != u->key)',the program will run failed
	//you must make sure that u!=NIl firstly,otherwise k will compare with NIL->key(which is not defined)
		if(k < u->key)u = u->left;
		else u = u->right;
	}
	return u;
}
int main()
{
	int n,k;
	scanf("%d",&n);
	char s[20];
	for(int i=0;i<n;++i){
		scanf("%s",s);
		if(s[0]=='i'){
			scanf("%d",&k);
			insert(k);
		}else if(s[0]=='f'){
			scanf("%d",&k);
			node *t = find(root,k);
			if(t != NIL )printf("yes\n");
			else printf("no\n");
		}
		else pr();
	}
	return 0;
}