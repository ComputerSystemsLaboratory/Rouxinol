#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define Rep(i,n) for(int i = 1; i <= n; i++)
#define sz(x) int(x.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define YesorNo(a) printf(a ? "Yes\n" : "No\n")
#define endl '\n'
#define fi first
#define se second
using ll = long long;
using P = pair<int,int>;
using Pl = pair<ll,ll>;
template<class T> using V = vector<T>;
const int dx[] = {0,1,0,-1,1,1,-1,-1};
const int dy[] = {1,0,-1,0,1,-1,-1,1};
const int inf = (1<<30)-1;
const ll infll = (1LL<<62)-1;
ll ceil(const ll &a, const ll &b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


void Dijkstra(int s, const vector<vector<P>> &g, vector<int> &dis) {
  priority_queue<P, vector<P>, greater<P>> que; // pair = (cost, v);
  dis[s] = 0;
  que.emplace(0,s);
  while(!que.empty()) {
    P p = que.top(); que.pop();
    int now = p.second;
    if(dis[now] < p.first) continue;
    for(P np : g[now]) {
      int next = np.second;
      if(dis[next] > dis[now] + np.first) {
        dis[next] = dis[now] + np.first;
        que.emplace(dis[next], next);
      }
    }
  }
}


int main(){
    
    int n;
    cin >> n;
    V<V<P>> g(n); // pair = (cost, to);
    rep(i,n) {
        int a, k;
        cin >> a >> k;
        rep(j,k) {
            int b, v;
            cin >> b >> v;
            g[a].emplace_back(v,b);
        }
    }

    V<int> d(n, inf);
    Dijkstra(0,g,d);
    rep(i,n) {
        printf("%d %d\n", i, d[i]);
    }
}
