#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
#define INF 1000000
int cost[1000][1000];
int d[1000];
bool used[1000];

int n,a,b,c,m;
using namespace std;

void dijkstra(int s){

  d[s] = 0;
  while(1){
    int v = -1;
    for(int u = 0 ; u <= m ; u++ ){
      if(!used[u] && (v == -1 || d[u] < d[v]))v = u;
    }

    if(v == -1)break;

    used[v] = true;

    for(int u = 0 ; u <= m ; u++ ){
      d[u] = min(d[u],d[v] + cost[v][u]);
    }
  }
}

int main(){
  int ans;
  while(cin >> n,n){
    memset(cost,INF,sizeof(cost));
    m = 0;
    for(int i = 0 ; i < n ; i++ ){

      cin >> a >> b >> c;

      cost[a][b] = cost[b][a] = c;
      if(m < a || m < b)m = max(a,b);
    }
    int ansj;
    int mn = 1000000;
    for(int j = 0 ; j <= m ; j++ ){
      fill(d,d + (m+1),INF);
      fill(used,used + (m+1),false);

      dijkstra(j);

      ans = 0;
      for(int i = 0 ; i <= m ; i++){
	ans+=d[i];
      }
      if(mn > ans){
	mn = ans;
	ansj = j;
      }
    }
    cout << ansj << " " << mn << endl;
  }
}