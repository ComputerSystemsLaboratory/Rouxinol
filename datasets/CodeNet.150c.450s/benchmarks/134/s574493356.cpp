#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#define N 100
using namespace std;

typedef struct{
	int parent;
	int right;
	int left;
} Node;
Node node[N];
int d[N],h[N],deg[N];

void in(int);
void pos(int);
void pre(int);
void swap(int *,int *);

int main(){
	int n,id,l,r;
	cin>>n;
	for(int i=0;i<n;i++){
		node[i].parent=-1; //???????´¢??¨
		d[i]=-1;
		deg[i]=0;
		h[i]=-1;
	}
	for(int i=0;i<n;i++){
		cin>>id>>l>>r;
		node[id].left=l;
		if(l!=-1) deg[id]++;
		node[id].right=r;
		if(r!=-1) deg[id]++;
		node[l].parent=id;
		node[r].parent=id;
	}
	int z;
	printf("Preorder\n");
	for(z=0;z<n;z++){
		if(node[z].parent==-1){
			pre(z);
			break;
		}
	}
	printf("\nInorder\n");
	in(z);
	printf("\nPostorder\n");
	pos(z);
	printf("\n");
	return 0;
}

void pre(int i){
	printf(" %d",i);
	int l=node[i].left;
	int r=node[i].right;
	if(l!=-1) pre(l);
	if(r!=-1) pre(r);
}
void in(int i){
	int l=node[i].left;
	int r=node[i].right;
	if(l!=-1) in(l);
	printf(" %d",i);
	if(r!=-1) in(r);
}
void pos(int i){
	int l=node[i].left;
	int r=node[i].right;
	if(l!=-1) pos(l);
	if(r!=-1) pos(r);
	printf(" %d",i);
}
void swap(int *a,int *b){
	int w=*a;
	*a=*b;
	*b=w;
}