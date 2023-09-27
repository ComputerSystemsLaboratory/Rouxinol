#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<stack>
#include<list>
#define MAX 10000
#define NIL -1


typedef long long ll;

using namespace std;

struct node{
	int p;
	int l;
	int r;
};

node T[MAX+10];

void preTr(int u){
	if(u == NIL)
		return;
	printf(" %d",u);
	preTr(T[u].l);
	preTr(T[u].r);
}

void inTr(int u){
	if(u == NIL)
		return;
	inTr(T[u].l);
	printf(" %d",u);
	inTr(T[u].r);
}

void postTr(int u){
	if(u == NIL)
		return;
	postTr(T[u].l);
	postTr(T[u].r);
	printf(" %d",u);
}

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i = 0 ; i<n ; i++){
		T[i].p = NIL;
	}
	
	for(int i = 0 ; i<n ; i++){
		int v,l,r;
		cin>>v>>l>>r;
		T[v].l = l;
		T[v].r = r;
		if(l!=NIL)
			T[l].p = v;
		if(r!=NIL)
			T[r].p = r; 
	}
	int root;
	for(int i = 0 ; i<n ; i++){
		if(T[i].p == NIL){
			root = i;
			break;
		}
	}
	
	printf("Preorder\n");
	preTr(root);
	printf("\n");
	
	printf("Inorder\n");
	inTr(root);
	printf("\n");
	
	printf("Postorder\n");
	postTr(root);
	printf("\n");
	
	return 0;
}