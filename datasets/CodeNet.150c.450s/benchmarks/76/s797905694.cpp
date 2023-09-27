#include <bits/stdc++.h>
using namespace std;

struct node{
	int key;
	node *p,*l,*r;
};

node *root,*nil;

int n;

void insert(int k){
	node *y,*x,*z;
	y=nil;
	x=root;
	z=(node*)malloc(sizeof(node));
	z->key=k;
	z->l=nil;
	z->r=nil;
	while(x!=nil){
		y=x;
		if(k < x->key){
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
		if( z->key  < y->key){
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

void pre(node *x){
	if(x==nil){
		return;
	}
	printf(" %d",x->key);
	pre(x->l);
	pre(x->r);
}

node *find(node *x,int k){
	while(x!=nil&&k!=x->key){
		if(k <x->key){
			x=x->l;
		}
		else{
			x=x->r;
		}
	}
	return x;
}

int main() {
	cin>>n;
	int key;
	char c[20];
	for(int i=0;i<n;i++){
		cin>>c;
		if( c[0]=='i'){
			cin>>key;
			insert(key);
		}
		else if(c[0]=='f'){
			cin>>key;
			node *x=find(root,key);
			if(x==nil){
				printf("no\n");
			}
			else{
				printf("yes\n");
			}
		}
		else{
			ino(root);cout<<endl;
			pre(root);cout<<endl;
		}
	}

	return 0;
}
