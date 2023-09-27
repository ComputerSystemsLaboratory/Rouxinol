// ?????????single source shortest path
// Bellman-Ford
#include <iostream>
#define INF 1001001000
#define BIG 500100
#define rep(i,p) for(int i=0;i<p;i++)
#define rep1(i,p) for(int i=1;i<=p;i++)
#define pb push_back
using namespace std;
int V,E,r,s,t,w;
int S[BIG];
int T[BIG];
int W[BIG];
int D[BIG];
int main(){
  // init
  rep(i,BIG) D[i] = INF;
  // r is source of graph
  cin >> V >> E >> r;
  rep(i,E) {
    cin >> s >> t >> w;
    S[i] = s;
    T[i] = t;
    W[i] = w;
  }
  D[r] = 0;
  rep(i,V) {
    bool update = false;
    rep(j,E) {
      // s,t ??? edge j ??? vartex
      s = S[j];
      t = T[j];
      w = W[j];
      if (D[t] > D[s]+w) {
        D[t] = D[s]+w;
        update = true;
      }
    }
    if (!update) break;
  }
  rep(i,V) {
    if (D[i] == INF) cout << "INF" << endl;
    else cout << D[i] << endl;
  }
  return 0;
}