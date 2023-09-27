#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct node{
	int key;
	node *pa,*le,*ri;
};

node *root,*NIL;

void Insert(int k)
{
	node *y=NIL;
	node *x=root;
	node *z;
	z=(node *)malloc(sizeof(node));
	z->le=NIL;
	z->ri=NIL;
	z->key=k;
	while(x!=NIL){
		y=x;
		if(z->key < x->key){
			x=x->le;
		}else{
			x=x->ri;
		}
	} 
	z->pa=y;
	if(y==NIL){
		root=z;
	}else{
		if(z->key < y->key){
			y->le=z;
		}else{
			y->ri=z;
		}
	}
}

node* Find(node *x,int k)
{
	while(x!=NIL&&k!=x->key){
		if(k< x->key){
			x=x->le;
		}else{
			x=x->ri;
		}
	}
	return x;
}

void inorder(node *u)
{
	if(u==NIL)return;
	inorder(u->le);
	cout<<' '<<u->key;
	inorder(u->ri);
}

void preorder(node *u)
{
	if(u==NIL)return;
	cout<<' '<<u->key;
	preorder(u->le);
	preorder(u->ri);
}

int main()
{
	int n;
	cin>>n;
	string str;
	int k;
	while(n--){
		cin>>str;
		if(str[0]=='i'){
			cin>>k;
			Insert(k);
		}else if(str[0]=='f'){
			cin>>k;
			node *t=Find(root,k);
			if(t!=NIL){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
		}else if(str[0]=='p'){
			inorder(root);
			cout<<endl;
			preorder(root);
			cout<<endl;
		}
	}
	return 0;	
}
