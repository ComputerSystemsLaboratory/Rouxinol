#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define rep(i,n) for(int i = 0; i < n; ++i)
#define reps(i,f,n) for(int i = f; i < n; ++i)
#define pb push_back
using namespace std;
using ll=long long;

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
    vector<int> used;
    vector<vector<T> > tmp;
    T INF;
    using PTI=pair<T,int>;


    ShortestPath(int _n, const T inf):n(_n),g(n),d(n),p(n), INF(inf){
    }

    void dijkstra(int s){
      priority_queue<PTI, vector<PTI>, greater<PTI> > pq;
      used.resize(n, 0);
      rep(i,n){
        d[i] = INF;
        p[i] = -1;
      }
      d[s] = 0;
      pq.push(PTI(0, s));
      while(!pq.empty()){
        T val = pq.top().first;
        int current = pq.top().second;
        pq.pop();
        if(used[current])continue;
        used[current] = 1;
        rep(i, g[current].size()){
          Edge e = g[current][i];
          if( d[e.to] > d[current] + e.val){
            d[e.to] = d[current] + e.val;
            p[e.to] = current;
            pq.push(PTI(d[e.to], e.to));
          }
        }
      }
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

    bool warshall_floyd(){
      tmp.resize(n, vector<T>(n,INF));

      rep(i,n)tmp[i][i] = 0;
      rep(i,n)rep(j, g[i].size()){
        tmp[i][g[i][j].to] = g[i][j].val;
      }
      rep(i,n)tmp[i][i] = 0;

      rep(k,n)rep(i,n)rep(j,n){
        if(tmp[i][k] == INF || tmp[k][j] == INF)continue;
        tmp[i][j] = min(tmp[i][j], tmp[i][k] + tmp[k][j]);
      }
      rep(k,n)rep(i,n)rep(j,n){
        if(tmp[i][k] == INF || tmp[k][j] == INF)continue;
        if(tmp[i][j] > tmp[i][k] + tmp[k][j]){
          return false;
        }
      }
      return true;
    }
};

int main(void){
  int v, e, r;
  int s,t,d;
  cin >> v >> e;
  const ll inf = 1000000000000LL;
  ShortestPath<ll> sp(v, inf);
  rep(i,e){
    cin >> s >> t >> d;
    sp.g[s].pb(ShortestPath<ll>::Edge(d, t));
  }
//   sp.dijkstra(r);
  bool res = sp.warshall_floyd();
  if(res){
    rep(i,v){
      rep(j, v){
        if(sp.tmp[i][j] == inf){
          cout << "INF";
        }else{
          cout << sp.tmp[i][j];
        }
        if(j != v-1)cout << " ";
      }
      cout << endl;
    }
  }else{
    cout << "NEGATIVE CYCLE" << endl;
  }

  return 0;
}