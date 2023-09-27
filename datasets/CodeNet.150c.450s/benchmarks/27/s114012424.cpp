#include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node *p,*l,*r;
};

node *root,*nil;
int n;

void insert(int k){
	node *x,*y,*z;
	y=nil;
	x=root;
	z=(node*)malloc(sizeof(node));
	z->key=k;
	z->l=nil;
	z->r=nil;
	while(x!=nil){
		y=x;
		if(k<x->key){
			x=x->l;
		}
		else{
			x=x->r;
		}
	}
	z->p=y;
	if(y==nil){
		root=z;
	}
	else{
		if(z->key < y->key){
			y->l=z;
		}
		else{
			y->r=z;
		}
	}
}

void ino(node *x){
	if(x==nil){
		return;
	}
	ino(x->l);
	printf(" %d",x->key);
	ino(x->r);
}

void pre (node *x){
	if(x==nil){
		return;
	}
	printf(" %d",x->key);
	pre(x->l);
	pre(x->r);
}

int main() {
	cin>>n;
	int key;
	char c[20];
	for(int i=0;i<n;i++){
		cin>>c;
		if(c[0]=='i'){
			cin>>key;
			insert(key);
		}
		else{
			ino(root);
			cout <<endl;
			pre(root);
			cout<<endl;
		}
	}
	return 0;
}
