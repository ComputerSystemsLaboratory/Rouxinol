#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int maxx=100010;

int pre[maxx];

int find(int u){
	if(pre[u]!=u) pre[u]=find(pre[u]);
	return pre[u];
}

int main(){
	int n,m,x,y;
	cin>>n>>m;
	for(int i=0;i<n;i++) pre[i]=i;
	while(m--){
		cin>>x>>y;
		pre[find(x)]=find(y);
	}
	cin>>m;
	while(m--){
		cin>>x>>y;
		if(find(x)==find(y)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
