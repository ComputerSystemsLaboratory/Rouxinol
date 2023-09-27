#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> mypair;
#define rep(i,n) for(int i=0;i<n;i++)


int main(){
int v,e;
cin>>v>>e;
vector<vector<mypair> > g(v);
int s,t,d;
rep(i,e){
	cin>>s>>t>>d;	
	g[s].push_back(mypair(t,d) );
	g[t].push_back(mypair(s,d) );
}
priority_queue<mypair,vector<mypair> ,greater<mypair> > q;
vector<bool> used(v,true);
int passpoint = 0;
int ans = 0;
used[0] = false;
passpoint ++;
rep(i,g[0].size())q.push(mypair(g[0][i].second,g[0][i].first) ); 
while(!q.empty()){
mypair now = q.top();
q.pop();
if(used[now.second]){
used[now.second] = false;
passpoint++;
ans+=now.first;
	rep(i,g[now.second].size()){
		q.push(mypair(g[now.second][i].second,g[now.second][i].first));
	}
}
else continue;
if(passpoint == v)break;
}
//cout<<passpoint<<endl;
cout<<ans<<endl;



	return 0;
}

