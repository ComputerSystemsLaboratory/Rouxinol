#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;

#define maxn 10000
#define nil -1

struct node{
	int p;
	int l;
	int r;
}t[maxn];

int n;

void preparse(int u){
	if(u==nil)
		return;
	cout<<" "<<u;
	preparse(t[u].l);
	preparse(t[u].r);
}

void inparse(int u){
	if(u==nil)
		return;
	inparse(t[u].l);
	cout<<" "<<u;
	inparse(t[u].r);
}

void postparse(int u){
	if(u==nil)
		return;
	postparse(t[u].l);
	postparse(t[u].r);
	cout<<" "<<u;
}
int main(){
	ios::sync_with_stdio(false);
	int i,v,l,r,root;
	cin>>n;
	for(int i=0;i<n;i++)
		t[i].p=nil;
	
	for(int i=0;i<n;i++){
		cin>>v>>l>>r;
		t[v].l=l;
		t[v].r=r;
		if(l!=nil)
			t[l].p=v;
		if(r!=nil)
			t[r].p=v;
	}
	
	for(int i=0;i<n;i++)
		if(t[i].p==nil)
			root=i;
	cout<<"Preorder"<<endl;
	preparse(root);
	cout<<endl;
	cout<<"Inorder"<<endl;
	inparse(root);
	cout<<endl;
	cout<<"Postorder"<<endl;
	postparse(root);
	cout<<endl;
	return 0;
}


