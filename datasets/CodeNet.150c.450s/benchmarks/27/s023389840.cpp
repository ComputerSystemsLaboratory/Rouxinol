#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct Node_struct{
	Node_struct *l, *r, *p;
	int key;
};
Node_struct* Root;

void insert(int num){
	Node_struct *x = Root , *y = NULL, *z;
	z=(Node_struct*)malloc(sizeof(Node_struct));
	z->key = num;
	z->l = NULL, z->r = NULL;
	
	while(x != NULL){
		y = x;
		if(z->key > x->key) x = x->r;
		else x = x->l;
	}
	z->p = y;
	if(y == NULL) Root = z;
	else if(z->key > y->key) y->r = z;
	else y->l = z;
}

void in(Node_struct *cur){
	if(cur==NULL)	return;
	in(cur->l);
	printf(" %d",cur->key);
	in(cur->r);
}

void pre(Node_struct *cur){
	if(cur==NULL)	return;
	printf(" %d", cur->key);
	pre(cur->l);
	pre(cur->r);
}

int main(){
	int i, n;
	int id;
	string s;
	scanf("%d", &n);
	
	for(i=0; i<n; ++i){
		cin >> s;
		if(s[0] == 'i'){
			scanf("%d", &id);
			insert(id);
		}
		else if(s[0] == 'p'){
			in(Root);
			printf("\n");
			pre(Root);
			printf("\n");
		}
	}
	
	return 0;
}
