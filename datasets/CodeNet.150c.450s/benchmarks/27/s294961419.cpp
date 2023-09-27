#include <bits/stdc++.h>
using namespace std;

struct node{
	int id;
	node *right,*left,*parent;
};

node*root;

void insert(int k){
	node *y=NULL,*x=root,*z;
	z=(node*)malloc(sizeof(node));
	z->id=k;
	z->left=NULL;	z->right=NULL;
	while(x!=NULL){
		y=x;
		if(z->id > x->id)	x=x->right;
		else 	x=x->left;
	}
	z->parent=y;
	if(y==NULL)	root=z;
	else{
		if(z->id > y->id)	y->right=z;
		else 	y->left=z;
	}
}

void in(node *cur){
	if(cur==NULL)	return;
	in(cur->left);
	printf(" %d",cur->id);
	in(cur->right);
}
void pre(node *cur){
	if(cur==NULL)	return;
	printf(" %d",cur->id);
	pre(cur->left);
	pre(cur->right);
}

int main(){
	int n;	cin>>n;
	string command;
	int v;
	for(int i=0;i<n;i++){
		cin>>command;
		if(command[0]=='i'){
			cin>>v;
			insert(v);
		}
		else if(command[0]=='p'){
			in(root);	cout<<endl;
			pre(root);	cout<<endl;
		}
	}
	return 0;
}