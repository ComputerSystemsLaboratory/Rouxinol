#include<bits/stdc++.h>
using namespace std;
#define inf 1e9+1
typedef pair<int,int> mypair;
int main(){
	int v,e,r;
	cin>>v>>e>>r;
	vector<vector<mypair> > g(v);
	int s,t,d;
	for(int i=0;i<e;i++){
	cin>>s>>t>>d;
	g[s].push_back(mypair(t,d));
	}
	priority_queue<mypair,vector<mypair>,greater<mypair> > q;
	vector<int> ans(v,inf);
	q.push(mypair(0,r));
	while(!q.empty()){
	mypair now = q.top();
	q.pop();
	if(now.first > ans[now.second]) continue;
	else{
		ans[now.second] =now.first;
		for(int i=0;i<g[now.second].size();i++){
		q.push(mypair(now.first+g[now.second][i].second,g[now.second][i].first));
		}
	}
	}

	for(int i=0;i<v;i++)if(ans[i]==inf)cout<<"INF"<<endl;else cout<<ans[i]<<endl;


	return 0;
}


