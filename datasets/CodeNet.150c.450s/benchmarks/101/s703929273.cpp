#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define NIL -1
vector<int>G[MAX];
int color[MAX];
int n;
void dfs(int r,int c){
	color[r]=c;
	stack<int>s;
	s.push(r);
	while(!s.empty()){
		int u=s.top();
		s.pop();
		for(int i=0;i<G[u].size();i++){
			int v=G[u][i];
			if(color[v]==NIL){
				color[v]=c;
				s.push(v);
			}
		}
	}
}


void assignColor(){
	memset(color,-1,sizeof(color));
	int id=1;
	for(int u=0;u<n;u++){
		if(color[u]==NIL)dfs(u,id++);
	}
	 
}


int main(){
	int m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int s,t;
		cin>>s>>t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	assignColor();
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		if(color[x]==color[y])cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
} 
