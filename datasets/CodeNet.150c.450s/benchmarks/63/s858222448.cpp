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
struct Dijkstra {
  typedef pair<int, int> P;
  struct edge {
    int to;
    int cost;
  };
  int V;
  vector<vector<edge> > G;
  vector<int> d;
  Dijkstra (int V):V(V) {
    G.resize(V+1);
    d.resize(V+1,1e9);
  }
  void calc(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    d[s]=0;
    que.push(P(0, s));
    while(!que.empty()){
      P p=que.top();que.pop();
      if(d[p.second]<p.first)continue;
      for(auto v : G[p.second]){
        if(d[v.to]>d[p.second]+v.cost){
          d[v.to]=d[p.second]+v.cost;
          que.push(P(d[v.to],v.to));
        }
      }
    }
  }
};

int main(){
    int V,E,r;
    cin>>V>>E>>r;
    Dijkstra dij(V+1);
    FOR(i,0,E){
        int s,t,d;
        cin>>s>>t>>d;
        dij.G[s].push_back({t, d});
    }
    dij.calc(r);
    FOR(i,0,V){
        if(dij.d[i]==1e9)cout<<"INF"<<endl;
        else cout<<dij.d[i]<<endl;
    }
}


