#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

struct Node{
	int key;
	Node *p,*l,*r;
}; 

Node *root,*NIL;

void insert(int k){
	Node *x = root;
	Node *y = NIL;
	Node *z;
	
	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->l = NIL;
	z->r = NIL;
	
	while(x!=NIL){
		y=x;
		if(z->key<x->key){
			x = x->l;
		}else{
			x= x->r;
		}
	}
		
		z->p = y;
		if(y==NIL){
			root = z;
		}else {
			if(z->key<y->key){
				y->l=z;
			}else{
				y->r = z;
			}
		}
	}
	
	Node *find(Node *u, int k)
	{
		while(u!=NIL&&u->key!=k){
			if(u->key>k){
				u = u->l;
			}else{
				u = u->r;
			}
		}
		return u;
	}
	
	
	
	
		
	void inorder(Node *u){
		if(u==NIL) return;
		inorder(u->l);
		printf(" %d",u->key);
		inorder(u->r);
	}
	
	
	
	void preorder(Node *u){
		if(u==NIL) return;
		printf(" %d",u->key);
		preorder(u->l);
		preorder(u->r);
	}
	
	
	int main(){
		int n,i,x;
		string com;
		
		scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			cin>>com;
			if(com=="insert"){
				scanf("%d", &x);
				insert(x);
			}else if(com=="find"){
				scanf("%d", &x);
				Node *p = find(root,x);
				if(p!=NIL) printf("yes\n");
				else printf("no\n");
			}
			else if(com=="print"){
				inorder(root);
				printf("\n");
				preorder(root);
				printf("\n");
			}
		}
		
		
		return 0;
}