#include <iostream>
#include<iomanip>
#include<algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;

int n,q,type,one,two;

int par[10005],ran[10005];

void init(int x){
	for(int i=0;i<x;i++){
		par[i]=i;
		ran[i]=0;
	}
}

int find(int x){
	if(par[x]==x) return x;
	else return par[x]=find(par[x]);
}

void unite(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y) return;
	if(ran[x]<ran[y]) par[x]=y;
	else{
		par[y]=x;
		if(ran[x]==ran[y]) ran[x]++;
	}
}

bool same(int x,int y){
	return find(x)==find(y);
}

int main(){
	cin>>n>>q;
	init(n);
	for(int i=0;i<q;i++){
		cin>>type>>one>>two;
		if(type==0) unite(one,two);
		else{
			if(same(one,two)) cout<<'1'<<endl;
			else cout<<'0'<<endl;
		}
	}
}