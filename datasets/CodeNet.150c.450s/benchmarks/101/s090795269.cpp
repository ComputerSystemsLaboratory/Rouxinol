#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
vector<int>G[100000];
queue<int>Q;
int col[100000],n,id=1;
void bfs(int u,int c){
	Q.push(u);
	col[u]=c;
	while(!Q.empty()){
		u=Q.front();Q.pop();
		r(i,0,G[u].size()){
			int w=G[u][i];
			if(col[w]==-1){
				Q.push(w);
				col[w]=c;
			}
		}
	}
}
void Color(){
	r(i,0,100000)col[i]=-1;
	r(i,0,n)if(col[i]==-1)bfs(i,id++);
}
int main(){
	int s,t,m,q;
	cin>>n>>m;
	r(i,0,m){
		cin>>s>>t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	Color();
	cin>>q;
	while(q--){
		cin>>s>>t;
		if(col[s]==col[t])cout<<"yes";
		else cout<<"no";
		cout<<endl;
	}
}