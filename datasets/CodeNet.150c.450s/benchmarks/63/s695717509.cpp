#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <climits>
#define int long long
using namespace std;
typedef pair <int,int> P;
#define to first
#define co second
#define fi first
#define se second
const int INF=INT_MAX;
const int MAX_N=100000;
vector <P> G[MAX_N];
int n,d[MAX_N];
void dijk(int s){
  priority_queue <P,vector<P>,greater<P> > que;
  fill(d,d+n,INF);
  d[s]=0;
  que.push(P(0,s));
  for(;!que.empty();){
    P p=que.top(); que.pop();
    int v=p.se;
    if (d[v]<p.fi) continue;
    for(int i=0;i<G[v].size();i++){
      P e=G[v][i];
      if(d[e.to]>d[v]+e.co){
	d[e.to]=d[v]+e.co;
	que.push(P(d[e.to],e.to));
      }
    }
  }
}
signed main(){
  int e,r;
  cin>>n>>e>>r;
  for(int i=0,a,b,c;i<e;i++){
    cin>>a>>b>>c;
    G[a].push_back(make_pair(b,c));
  }
  dijk(r);
  for(int i=0;i<n;i++){
    if(d[i]==INF) cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
  return 0;
}