//default
#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
typedef pair<int, int> P_i;
typedef pair<double,double> P_d;
#define rep(i,n) for(int i=0;i<(n);++i)
#define alrep(i,j,n) for(int i=0;i<(n);++i)for(int j=i+1;j<(n);++j)
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;int ans=0;
#define answer cout << ans << endl;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const int MOD=1e9+7;
const long long INF = 1LL << 60;

class Edge {
public:
  int to;     // 辺の行き先
  int weight; // 辺の重み
  Edge(int t, int w) : to(t), weight(w) { }
};

using Graph = vector<vector<Edge>>;

signed main(){
  // 頂点数と辺数
  int N, M, r; cin >> N >> M >> r;

  // グラフ
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b, d;
    cin >> a >> b >> d;
    G[a].push_back(Edge(b,d));

    // 無向グラフの場合は以下を追加
    // G[b].push_back(a);
  }

  vector<int> D(N,INF);
  D[r]=0;
  rep(i,N){
    rep(j,N){
      if(D[j]>=INF/2) continue;
      for(auto v : G[j]){
        if(D[v.to]>D[j]+v.weight){
          D[v.to]=D[j]+v.weight;

          if(i==N-1){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
          }
        }
      }
    }
  }
  rep(i,N){
    if(D[i]>=INF/2) cout << "INF" << endl;
    else cout << D[i] << endl;
  }


  return 0;
}

