#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int key;
	Node *p, *l, *r;
} *root = NULL;

void insert(Node *z){
	Node *x, *y;
	y = NULL;
	x = root;
	while(x!=NULL){
		y = x;
		if(z->key < x->key) x = x->l;
		else x = x->r;
	}
	z->p = y;
	if(y==NULL) root = z;
	else if(z->key < y->key) y->l = z;
	else y->r = z;
}
void preP(Node *x){
	if(x==NULL) return;
	printf(" %d",x->key);
	preP(x->l);
	preP(x->r);
}
void inP(Node *x){
	if(x==NULL) return;
	inP(x->l);
	printf(" %d",x->key);
	inP(x->r);
}
int main()  
{
	char cmd[10];
	int n; cin>>n;
	while(n--){
		scanf("%s",cmd);
		if(cmd[0]=='i'){
			Node *z = new Node;
			scanf("%d",&(z->key));
			z->l = z->r = NULL;
			insert(z);
		}
		else{
			inP(root);
			putchar('\n');
			preP(root);
			putchar('\n');
		}
	}
	return 0;
}


