#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

struct Node{
	int key;
	Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int kiki){

	Node *a=root;
	Node *b=NIL;
	Node *c;


	c=(Node *)malloc(sizeof(Node));

	c->key=kiki;
	c->left=NIL;
	c->right=NIL;

	while(a!=NIL){
		b=a;

		if(c->key < a->key){
			a=a->left;
		}
		else{
			a=a->right;
		}
	}


	c->parent=b;

	if(b==NIL){
		root=c;
	}
	else{
		if(c->key<b->key){
			b->left=c;
		}
		else{
			b->right=c;
		}
	}
}

void nanigashi(Node *g){

	if(g==NIL)
		return;

	nanigashi(g->left);
	printf(" %d",g->key);
	nanigashi(g->right);

}


void samura(Node *g){

	if(g==NIL)
		return;

	printf(" %d",g->key);
	samura(g->left);
	samura(g->right);

}

int main(){

	int n,s,i;
	string momo;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		cin>>momo;
		if(momo=="insert"){

			scanf("%d",&s);

			insert(s);
		}
		else if(momo=="print"){

			nanigashi(root);

			printf("\n");

			samura(root);

			printf("\n");
		}
	}

	return 0;
}
