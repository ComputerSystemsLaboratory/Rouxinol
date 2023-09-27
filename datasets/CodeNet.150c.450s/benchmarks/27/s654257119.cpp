#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct node{
	int num;
	node *parent,*left,*right;
};
node *root,*NIL;

void print_inorder(node *x){
	if(x==NIL) return ;
	print_inorder(x->left);
	printf(" %d",x->num);
	print_inorder(x->right);
	return ;
}

void print_preorder(node *x){
	if(x==NIL) return ;
	printf(" %d",x->num);
	print_preorder(x->left);
	print_preorder(x->right);
	return ;
}

void insert(int a){
	node *x=root,*y=NIL;
	node *z=new node();
	z->num=a;z->left=NIL;z->right=NIL;
	while(x!=NIL){
		y=x;
		if(z->num < x->num) x=x->left;
		else x=x->right;
	}
	z->parent=y;
	if(y==NIL) root=z;
	else {
		if(z->num < y->num) y->left=z;
		else y->right=z;
	}
	return ;
}

int main(){
	int n;
	cin>>n;
	string s;
	int a;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s[0]=='i') cin>>a,insert(a);
		else{
			print_inorder(root);
			printf("\n");
			print_preorder(root);
			printf("\n");
		}
	}
	return 0;
}
