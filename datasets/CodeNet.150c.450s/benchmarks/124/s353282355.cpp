#include <iostream>
#include <vector>
using namespace std;
struct edge {int from, to, cost;};
const long long INF = 1000000000;
void bellman_ford(std::vector<edge> & es, std::vector<int> & d, int E, int V, int s) {
  for(int i=0;i<V;i++) d[i] = INF;
  d[s] = 0;
  while(true) {
    bool update = false;
    for(int i=0;i<E;i++) {
      edge e = es[i];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if(!update) break;
  }
}
 
int main() {
  int n;
  cin >> n;
  vector<edge> e;
  for(int i=0;i<n;i++) {
    int u, k;
    cin >> u >> k;
    for(int j=0;j<k;j++) {
      int vi, ci;
      cin >> vi >> ci;
      edge ei = {u, vi, ci};
      e.push_back(ei);
    }
  }
  vector<int> d(n);
  bellman_ford(e, d, e.size(), n, 0);
  for(int i=0;i<n;i++) {
    cout << i << " " << d[i] << endl;
  }

}