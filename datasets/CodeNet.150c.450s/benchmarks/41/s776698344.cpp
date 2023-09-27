#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

struct WarshallFloyd {
  vector<int> a,b,c;
  int V,E; // 辺の数
  int INF;
  vector<vector<int> > dist;
  WarshallFloyd(int V, int E):V(V),E(E){
    INF = 2e9;
    a.resize(E,INF);
    b.resize(E,INF);
    c.resize(E,INF);
    dist.resize(V, vector<int>(V, INF));
  }
  void calc(){
    for(int i=0;i<V;i++){
      dist[i][i]=0;
    }
    for(int i=0;i<E;i++){
      dist[a[i]][b[i]] = min(dist[a[i]][b[i]], c[i]);
    }
    for(int k=0;k<V;k++){
      for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
          if(dist[i][k]==INF||dist[k][j]==INF) continue;
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int V,E;
  cin>>V>>E;
  WarshallFloyd WF(V, E);
  FOR(i,0,E){
    cin>>WF.a[i]>>WF.b[i]>>WF.c[i];
  }
  WF.calc();
  FOR(i,0,V){
    if(WF.dist[i][i]<0){
      cout<<"NEGATIVE CYCLE"<<endl;
      return 0;
    }
  }
  FOR(i,0,V) {
    FOR(j,0,V) {
      if(j) cout<<" ";
      if(WF.dist[i][j]==2e9) cout<<"INF";
      else cout<<WF.dist[i][j];
    }
    cout<<endl;
  }
}
