#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+9;
int idx[MAX]={0};
void init(){
	int i;
	for(i=0;i<MAX;i++)
		idx[i]=i;
}
int findroot(int i){
	while(i!=idx[i])
		i=idx[i];
	return i;
}
void munion(int u ,int v){
	u=findroot(u);
	v=findroot(v);
	if(u!=v)
		idx[v]=u;
}
int main(){
	int i ,j ,n ,m;
	cin>>n>>m;
	init();
	while(m--){
		int x ,y;
		cin>>x>>y;
		munion(x ,y);
	}
	int q;
	cin>>q;
	while(q--){
		int  u ,v;
		cin>>u>>v;
		u=findroot(u);
		v=findroot(v);
		if(u==v)
			cout<<"yes"<<"\n";
		else
			cout<<"no"<<"\n";
	}
}
