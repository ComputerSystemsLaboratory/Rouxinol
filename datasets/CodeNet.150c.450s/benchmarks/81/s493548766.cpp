#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX_V 11
#define INF (1e9)
#define cost first
#define node second
using namespace std;
typedef pair <int, int> P;
int n,m;
vector<P> G[101];

//prim
int prim(){
  int res = 0;
  bool visited[101]={};
  int D[101];
  for(int i=0;i<n;i++) D[i] = INF;
  priority_queue <P, vector<P>, greater<P> > Q;
  Q.push(P(0,0));
  while(!Q.empty()){
    P t = Q.top(); Q.pop();
    if(visited[t.node]) continue;
    visited[t.node] = true;
    res += t.cost;
    for(int i=0;i<G[t.node].size();i++){
      int nnode = G[t.node][i].node;
      int ncost = G[t.node][i].cost;
      if(D[nnode] > ncost) Q.push(P(ncost,nnode)),D[nnode]=ncost;
    }
  }
  return res;
}

/*
void init(int n){
  for(int i=0;i<n;i++) G[i].clear();
}
*/

// warshall froyd
	  
int d[MAX_V][MAX_V];
int used[MAX_V];

void init(){
  for(int i=0;i<MAX_V;i++)
    for(int j=0;j<MAX_V;j++) i!=j ? d[i][j]=INF : d[i][j]=0;
}
  
void warshall_froyd(){
  for(int k=0;k<MAX_V;k++)
    for(int i=0;i<MAX_V;i++)
      for(int j=0;j<MAX_V;j++) d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
}



int main() {
  while(1){
    cin >> n;
    if(!n)break;
    init();
    int v = 0;
    for(int i=0;i<n;i++){
      int a,b,c;
      cin >>a>>b>>c;
      d[a][b] = c;
      d[b][a] = c;
      v = max(a,max(b,v));
    }
    warshall_froyd();
    int ans = INF;
    int node=-1;
    for(int i=0;i<=v;i++){
      int sum = 0;
      for(int j=0;j<=v;j++) sum+= d[i][j];
      if(ans > sum) ans=sum , node = i;
    }
    cout <<node <<" "<< ans <<endl;
  }
  return 0;
}