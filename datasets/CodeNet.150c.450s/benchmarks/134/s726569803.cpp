#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#pragma GCC optimize(3,"Ofast","inline")
#pragma GCC optimize(2)
#define NIL -1

using namespace std;

struct node{
	int pa,le,ri;
};

const int maxn=1e7+10;
node nd[maxn];

void Init(int n)
{
	for(int i=0;i<n;i++){
		nd[i].pa=nd[i].le=nd[i].ri=NIL;
	}
}

int getRoot(int n)
{
	for(int i=0;i<n;i++){
		if(nd[i].pa==NIL){
			return i;
		}
	}
}

void preParse(int u)
{
	if(u==NIL)return;
	printf(" %d",u);
	preParse(nd[u].le);
	preParse(nd[u].ri);
}

void inParse(int u)
{
	if(u==NIL)return;
	inParse(nd[u].le);
	printf(" %d",u);
	inParse(nd[u].ri);
}

void postParse(int u)
{
	if(u==NIL)return;
	postParse(nd[u].le);
	postParse(nd[u].ri);
	printf(" %d",u);
}

int main()
{
	int n;
	scanf("%d",&n);
	Init(n);
	int v,l,r; 
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&v,&l,&r);
		nd[v].le=l;
		nd[v].ri=r;
		nd[l].pa=v;
		nd[r].pa=v;	
	}
	int root=getRoot(n);
	
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
