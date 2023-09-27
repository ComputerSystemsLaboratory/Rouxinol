#include<bits/stdc++.h>
 
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
 
using namespace std;
 
typedef pair<int,int> ii;
const int IINF = INT_MAX;
 
vector<ii> G[100010];
int mincost[100010];
int V,E,r;
 
int main(){
  scanf("%d %d %d",&V,&E,&r);
 
  int s,t,d;
  rep(i,E){
    scanf("%d %d %d",&s,&t,&d);
    G[s].push_back(ii(t,d));
  }
 
  rep(i,V) mincost[i] = IINF;
  mincost[r] = 0;
  deque<int> deq; deq.push_back(r);
  vector<int> in_queue(V,0); in_queue[r] = 1;
 
  while(!deq.empty()){
    int u = deq.front(); deq.pop_front(); in_queue[u] = 0;
    rep(i,(int)G[u].size()){
      int v = G[u][i].first, c = G[u][i].second;
      if( mincost[v] > mincost[u] + c ) {
        mincost[v] = mincost[u] + c;
        if( !in_queue[v] ) {
          deq.push_back(v);
          in_queue[v] = 1;
        }
      }
    }
  }
 
  rep(i,V) {
    if( mincost[i] == IINF ) puts("INF");
    else printf("%d\n",mincost[i]);
  }
 
  return 0;
}