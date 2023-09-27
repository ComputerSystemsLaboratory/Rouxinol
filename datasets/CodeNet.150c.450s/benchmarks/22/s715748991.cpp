#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
#include <deque>
#include <limits>
using namespace std;
typedef long long ll;
 
#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define FOREACH(i,Itr) for(auto (i)=(Itr).begin();(i)!=(Itr).end();(i)++)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())
#define LBOUND(Itr,val) lower_bound((Itr).begin(),(Itr).end(),(val))
#define UBOUND(Itr,val) upper_bound((Itr).begin(),(Itr).end(),(val))
 
template<class T> struct BellmanFord {
  struct Edge {
    int from,to;
    T cost;
    Edge (int f, int t, T c) : from(f), to(t), cost(c) {}
  };
  const T INF = numeric_limits<T>::max() / 2;
  vector< vector<T> > d;
  vector<Edge> edge;
  BellmanFord (int n) : d(2,vector<T>(n)) {}
  void add_directed_edge(int from, int to, T cost) {
    edge.push_back(Edge(from,to,cost));
  }
  void init(int s) {
    for (int i=0; i<d[0].size(); i++) d[0][i] = INF;
    d[0][s] = 0;
    for (int k=0; k<2; k++) {
      for (int j=0; j<d[0].size(); j++) {
        for (int i=0; i<edge.size(); i++) {
          Edge e = edge[i];
          if (d[k][e.from] != INF && d[k][e.to] > d[k][e.from] + e.cost) {
            d[k][e.to] = d[k][e.from] + e.cost;
          }
        }
      }
      if (k == 0) d[1] = d[0];
    }
  }
  bool find_negative_loop(int v) { 
    return d[0][v] != d[1][v]; 
  }
  T dist(int v) { 
    return d[0][v]; 
  }
};

int main() {

  int V,E,r;
  cin >> V >> E >> r;

  BellmanFord<int> inst(1010);

  REP(i,E) {
    int from,to,c;
    cin >> from >> to >> c;
    inst.add_directed_edge(from,to,c);
  }

  inst.init(r);
  REP(i,V) {
    if(inst.find_negative_loop(i)) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  REP(i,V) {
    if(inst.dist(i) == inst.INF) cout << "INF" << endl;
    else cout << inst.dist(i) << endl;
  }

  return 0;
}