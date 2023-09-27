#include <iostream>
#include <vector>
#define MAX_N 100000
#define pb push_back
using namespace std;

int par[MAX_N];

void init(int n){
	for(int i=0;i<n;i++){
		par[i]=i;
	}
}

int root(int x){
	if(par[x]==x){
		return x;
	}
	else{
		return par[x]=root(par[x]);
	}
}

bool same(int x,int y){
	return root(x)==root(y);
}

void unite(int x,int y){
	x=root(x);
	y=root(y);
	if(x==y)return;
	par[x]=y;
}

int main(){
	int n,q;
	int a,b,c;
	cin>>n>>q;

	init(n);
	while(q--){
		cin>>a>>b>>c;
		if(a==0){
			unite(b,c);
		}
		else{
			cout<<same(b,c)<<endl;
		}
	}
}