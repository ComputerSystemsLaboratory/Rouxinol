#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define inf (ll)1e18
using namespace std;
int V,E,R;
struct edge{
  int to,cost;
};
vector<edge> v[100001];
int main(){
  cin>>V>>E>>R;
  for(int i=0;i<E;i++){
    int s,t,d;cin>>s>>t>>d;
    v[s].push_back({t,d});
  }
  ll d[100001];
  for(int i=0;i<V;i++){
    d[i]=inf;
  }
  d[R]=0;
  priority_queue<pair<ll,int> > q;
  q.push(make_pair(0,R));
  while(!q.empty()){
    int now=q.top().se;
    ll nowd=-q.top().fi;
    q.pop();
    if(nowd>d[now])continue;
    vector<edge> temp=v[now];
    for(int i=0;i<temp.size();i++){
      if(d[temp[i].to]>d[now]+temp[i].cost){
        d[temp[i].to]=d[now]+temp[i].cost;
        int next=temp[i].to;
        q.push(make_pair(-d[next],next));
      }
    }
  }
  for(int i=0;i<V;i++){
    if(d[i]==inf){
      cout<<"INF"<<endl;
      continue;
    }
    cout<<d[i]<<endl;
  }
  return 0;
}