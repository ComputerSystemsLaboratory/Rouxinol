#include<bits/stdc++.h>
using namespace std;
int a[101][101];
int n;
int tt;
int color[101];
int nt[101];
int d[101],p[101];

int next(int u){
	for(int v=nt[u];v<n;v++){
		nt[u]=v+1;
		if(a[u][v])return v;
	}
	return -1;
}

void dfs_visit(int r){
	memset(nt,0,sizeof(nt));
	d[r]=++tt;
	color[r]=1;
	stack<int >s;
	s.push(r);
	while(!s.empty()){
		int u=s.top();
		int v=next(u);
		if(v!=-1){
			if(color[v]==0){
				d[v]=++tt;
				color[v]=1;
				s.push(v);
			}
		}
		else{
			s.pop();
			color[u]=2;
			p[u]=++tt;
		}
	}
}

void dfs(){
	int u;
	tt=0;
	for(u=0;u<n;u++)color[u]=0;
	for(u=0;u<n;u++){
		if(color[u]==0)dfs_visit(u);
	}
	for(u=0;u<n;u++)
	cout<<u+1<<" "<<d[u]<<" "<<p[u]<<endl;
}

int main(){
	cin>>n;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		int u;
		int k;
		cin>>u>>k;
		u--;
		for(int j=0;j<k;j++){
			int v;
			cin>>v;
			v--;
			a[u][v]=1;
		}
	}
	dfs();
} 
