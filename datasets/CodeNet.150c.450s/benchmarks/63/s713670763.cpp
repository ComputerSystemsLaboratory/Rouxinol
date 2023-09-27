#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
vector<vector<P> > G;
signed main(){
  int n,e,r;
  cin>>n>>e>>r;
  int INF=1LL<<55LL;
  G.resize(n);
  for(int i=0;i<e;i++){
    int s,t,d;
    cin>>s>>t>>d;
    G[s].push_back(P(t,d));
  }
  int d[n];
  for(int i=0;i<n;i++) d[i]=INF;

  priority_queue<P,vector<P>,greater<P> > q;
  d[r]=0;
  q.push(P(0,r));

  while(!q.empty()){
    P p=q.top();q.pop();
    int u=p.second,c=p.first;
    //cout<<u<<" "<<c<<endl;
    if(d[u]<c) continue;
    for(P e:G[u]){
      int v=e.first,w=e.second;
      if(d[v]>d[u]+w){
	d[v]=d[u]+w;
	q.push(P(d[v],v));
	//cout<<v<<":"<<d[v]<<endl;
      }
    }
  }
  
  for(int i=0;i<n;i++){
    if(d[i]==INF) cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }

  return 0;
}