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


signed _main(){
  int n; cin >> n;
  vv<int> M(n,v<int>(n));
  rep(i,n)rep(j,n) cin >> M[i][j];
  v<int> color(n,0),d(n,INF),p(n,-1);
  d[0]=0;//TとV-Tをつなぐ辺で最も重みが小さいものの大きさ
  int u,minv,sum=0;

  while(1){
    minv=INF;
    u=-1;//確定した頂点
    rep(i,n){
      if(minv > d[i] && color[i] != 2){
        u=i;
        minv = d[i];
      }
    }
    if(u == -1) break;//更新無し
    color[u]=2;
    rep(v,n){
      if(color[v]!=2 && M[u][v]!=-1){
        if(d[v]>M[u][v]){
          d[v]=M[u][v];
          p[v]=u;
          color[v]=1;
        }
      }
    }
  }

  rep(i,n){
    if(p[i]!=-1) sum+=M[i][p[i]];
  }

  cout << sum << endl;

  return 0;
}

