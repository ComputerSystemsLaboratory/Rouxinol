#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e6+9;
pair<int, pair<int, int> >p[MAX];
int idx[MAX];
int cost,n,m;
void init(int n){
	for(int i=0;i<n;i++){
		idx[i]=i;
	}
}
int findroot(int i){
	while(i!=idx[i]){
		i=idx[i];
	}
	
	return i;
}
void makeunion(int u, int v){
	u=findroot(u);
	v=findroot(v);
	idx[u]=v;
}
void spanning(){
	for(int i=0;i<m;i++){
		int w=p[i].first;
		int u=p[i].second.first;
		int v=p[i].second.second;
		int x=findroot(u);
	    int y=findroot(v);
		if(x!=y){
			makeunion(u,v);
			cost+=w;
		}

	}
}
int main(){
	int i,j;
	cin>>n>>m;
	init(n);
	for(i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		p[i]=make_pair(z,make_pair(x,y));
	}
	sort(p, p+m);
	spanning();
	cout<<cost<<"\n";


}
