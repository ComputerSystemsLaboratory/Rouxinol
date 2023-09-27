#include<iostream>
#include<vector>

#define rep(i,n) for(int i = 0; i < n; ++i)
#define reps(i,f,n) for(int i = f; i < n; ++i)
#define pb push_back
using namespace std;

template<typename T>
class ShortestPath{
  public:
    class Edge{
      public:
        T val;
        int to;
        Edge(T v, int t):val(v), to(t){}
    };

    int n;
    vector< vector<Edge> > g;
    vector<T> d;
    vector<T> p;
    T INF;


    ShortestPath(int _n, const T inf):n(_n),g(n),d(n),p(n), INF(inf){
    }

    bool bellman_ford(int s){
      rep(i,n){
        d[i] = INF;
        p[i] = -1;
      }
      d[s] = 0;

      reps(i,1,n-1){
        rep(j, g.size()){
          if(d[j] == INF)continue;
          rep(k, g[j].size()){
            int u = j;
            int v = g[j][k].to;
            T c = g[j][k].val;
            if( d[v] > d[u] + c){
              d[v] = d[u] + c;
              p[v] = u;
            }
          }
        }
      }
      rep(i, g.size()){
        if(d[i] == INF)continue;
        rep(j, g[i].size()){
            int u = i;
            int v = g[i][j].to;
            T c = g[i][j].val;
            if( d[v] > d[u] + c){
              return false;
            }
        }
      }
      return true;
    }
};

int main(void){
  int v, e, r;
  int s,t,d;
  cin >> v >> e >> r;
  const int inf = 1000000000;
  ShortestPath<int> sp(v, inf);
  rep(i,e){
    cin >> s >> t >> d;
    sp.g[s].pb(ShortestPath<int>::Edge(d, t));
  }
  bool res = sp.bellman_ford(r);
  if(res){
    rep(i,v){
      if(sp.d[i] == inf){
        cout << "INF" << endl;
      }else{
        cout << sp.d[i] << endl;
      }
    }
  }else{
    cout << "NEGATIVE CYCLE" << endl;
  }

  return 0;
}