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
const int MAX_V=100000;
vector <P> G[MAX_V];
int v,d[MAX_V];
void dijk(int s){
  priority_queue <P,vector<P>,greater<P> > que;
  fill(d,d+v,INF);
  d[s]=0;
  que.push(P(0,s));
  for(;!que.empty();){
    P p=que.top(); que.pop();
    int v=p.se;
    if (d[v]<p.fi) continue;
    for(int i=0;i<(int)G[v].size();i++){
      P e=G[v][i];
      if(d[e.to]>d[v]+e.co){
	d[e.to]=d[v]+e.co;
	que.push(P(d[e.to],e.to));
      }
    }
  }
}
signed main(){

  cin>>v;
  for(int i=0,u,k;i<v&&cin>>u>>k;i++) for(int j=0,a,b;j<k&&cin>>a>>b;j++) G[u].push_back(P(a,b));
  dijk(0);
  for(int i=0;i<v;i++) cout<<i<<" "<<d[i]<<endl;
  return 0;

}