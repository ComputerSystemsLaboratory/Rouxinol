#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>

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
	z->key=k;
	z->le=NIL;
	z->ri=NIL;
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

void inorder(node *u)
{
	if(u==NIL)return;
	inorder(u->le);
	printf(" %d",u->key);
	inorder(u->ri);
}

void preorder(node *u)
{
	if(u==NIL)return;
	printf(" %d",u->key);
	preorder(u->le);
	preorder(u->ri);
}

int main()
{
	int n;
	cin>>n;
	string str;
	int k;
	for(int i=0;i<n;i++){
		cin>>str;
		getchar();
		if(str[0]=='i'){
			cin>>k;
			Insert(k);
		}else if(str[0]=='p'){
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}
