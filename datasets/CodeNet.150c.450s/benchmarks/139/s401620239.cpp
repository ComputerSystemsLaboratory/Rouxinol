#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define SZ(x) ((int)(x).size())
#define rep(i,n) for(int i=0;i<(n);++i)
#define fore(i,a) for(auto &i:a)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define ALL(x) (x).begin(),(x).end()
signed _main(); signed main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> using v = vector<T>;
template<class T> using vv = vector<v<T>>;
const int MOD=1e9+7;
const long long INF = 1LL << 60;
using P=pair<int,int>;
using Graph = vector<vector<int>>;

signed _main(){
  int N,M; cin >> N >> M;
  v<int> ans(N);
  // グラフ
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a--;b--;
    G[a].push_back(b);

    // 無向グラフの場合は以下を追加
    G[b].push_back(a);
  }

  // BFS のためのデータ構造
  vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
  queue<int> que;

  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0); // 0 を橙色頂点にする

  // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop();

    // v から辿れる頂点をすべて調べる
    for (int nv : G[v]) {
      if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない
      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;

      que.push(nv);
    }
  }
  for(int i=1;i<N;i++){
    fore(j,G[i]){
      if(dist[j]==dist[i]-1){
        ans[i]=j;
        break;
      }
    }
  }
  Yes
  for(int i=1;i<N;i++){
    cout << ans[i]+1 << endl;
  }

  return 0;
}
