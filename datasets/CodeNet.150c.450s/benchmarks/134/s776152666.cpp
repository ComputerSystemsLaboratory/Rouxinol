#include "bits/stdc++.h"
using namespace std;
#define MAX 10000
#define NIL -1

struct Node{int p,l,r;};
Node T[MAX];
int n;

void preParse(int u){
	if(u==NIL)return;
	cout<<" "<<u;
	preParse(T[u].l);
	preParse(T[u].r);
}
void inParse(int u){
	if(u==NIL)return;
	inParse(T[u].l);
	cout<<" "<<u;
	inParse(T[u].r);
}
void postParse(int u){
	if(u==NIL)return;
	postParse(T[u].l);
	postParse(T[u].r);
	cout<<" "<<u;
}

int main(){
	int v,l,r,root;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i) {T[i].p=NIL;}
	for (int i = 0; i < n; ++i) {
		scanf("%d %d %d",&v,&l,&r);
		T[v].l=l;
		T[v].r=r;
		if(l!=NIL)T[l].p=v;
		if(r!=NIL)T[r].p=v;
	}
	for (int i = 0; i < n; ++i) {if(T[i].p==NIL)root=i;}
	printf("Preorder\n");
	preParse(root);
	printf("\n");
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	printf("Postorder\n");
	postParse(root);
	printf("\n");
	return 0;
}