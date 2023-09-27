#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n,m;
	cin>>n>>m;
	vector<vector<int> > g(n+1);
	for(ll i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	vector<ll> d(n+1,LONG_MAX);
	d[1]=0;
	vector<ll> p(n+1,0);
	queue<ll> q;
	q.push(1);
	
	while(!q.empty()){
		ll tp=q.front();
		q.pop();
		for(ll i=0;i<g[tp].size();i++){
			if(d[g[tp][i]]==LONG_MAX){
				d[g[tp][i]]=d[tp]+1;
				p[g[tp][i]]=tp;
				q.push(g[tp][i]);
			}	
		}
	}
	bool flag=false;
	for(int i=2;i<(n+1);i++){
		if(p[i]==0){
			flag=true;
			break;
		}
	}
	if(flag){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
		for(int i=2;i<(n+1);i++){
			cout<<p[i]<<endl;
		}
	}
	return 0;
}
