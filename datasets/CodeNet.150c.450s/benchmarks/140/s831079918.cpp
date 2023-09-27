#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> mypair;

int main(){
int v,e;
cin>>v>>e;
vector<vector<mypair> > g(v);
for(int i=0;i<e;i++){
int s,t,v2;
cin>>s>>t>>v2;
g[s].push_back(mypair(v2,t));
g[t].push_back(mypair(v2,s));
}
vector<bool> used(v,true);
priority_queue<mypair,vector<mypair>,greater<mypair> > q;
used[0]=false;
for(int i=0;i<g[0].size();i++){
q.push(g[0][i]);
}
int respoint=v-1;
int ans=0;
while(!q.empty()){
mypair tmp=q.top();
q.pop();
if(!used[tmp.second])continue;
ans+=tmp.first;
used[tmp.second]=false;
for(int i=0;i<g[tmp.second].size();i++){
q.push(g[tmp.second][i]);
}
respoint--;
if(respoint==0)break;
}
cout<<ans<<endl;

return 0;
}

