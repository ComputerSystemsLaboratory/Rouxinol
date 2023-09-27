#include<bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rbegin(), cont.rend()
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,n) for(int i=1; i<=(n); ++i)
#define Dcout(a) cout << setprecision(20) << a << endl
#define MP make_pair
#define PB push_back
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
using ll = long long;
using PAIR = pair<int, int>;
using Graph = vector<vector<int>>;
// const ll INF = (1LL << 60);
const double pi=acos(-1.0);
#define debug cout << "line : " << __LINE__ << " debug" << endl
/****** Template of some basic operations *****/
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
/**************************************/

/******** User-defined Function *******/
// const int INF = 1e8;
// int n;
// Graph G;

// void warshall_floyd(int n) {
//   for (int k = 0; k < n; k++){       // 経由する頂点
//     for (int i = 0; i < n; i++) {    // 始点
//       for (int j = 0; j < n; j++) {  // 終点
//         G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
//       }
//     }
//   }
// }
/**************************************/

/********** Main()  function **********/
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

     //どの経路よりも大きい数字
    //たどり着けないことを表す
    constexpr ll INF = 2000000000;

    //頂点数
    int V;
    cin >> V;

    //辺の数
    int E;
    cin >> E;

    //隣接行列G
    //G[i][j]･･･頂点iから頂点jに行くまでの最短コスト
    vector<vector<ll>> G(V, vector<ll>(V, INF));

    //自分の頂点へは移動するコストは0なので0にする
    for (int i = 0; i < V; i++) {
        G[i][i] = 0;
    }

    //辺の入力
    for (int i = 0; i < E; i++) {
        int u, v, cost;
        cin >> u >> v >> cost;

        //頂点uからvへの辺のうち、一番小さいコストを使う
        G[u][v] = cost;

    }

    //ワーシャルフロイド法
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            if(G[i][k]==INF) continue;
            for (int j = 0; j < V; j++) {
                if(G[k][j]==INF) continue;
                G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            }
        }
    }

    rep(i,V){
        if(G[i][i]<0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    rep(i,V){
        rep(j,V){
            if(G[i][j]==INF) cout << "INF";
            else cout << G[i][j];
            
            if(j==V-1) cout << endl;
            else cout << " ";
        }
    }

    // int m;
    // cin >> n >> m;
    // G.resize(n);
    // rep(i,n) G[i][i] = 0;

    // // debug;
    // // rep(i,n){
    // //     rep(j,n){
    // //         cout << G[i][j];
    // //     }
    // //     cout << endl;
    // // }

    // rep(i,m){
    //     int s,t,d; cin >> s >> t >> d;
    //     G[s][t] = d;
    // }

    // warshall_floyd(n);

    // rep(i,n){
    //     rep(j,n){
    //         if(G[i][j]==INF) cout << "INF";
    //         else cout << G[i][j];
    //         if(j==n-1) cout << endl;
    //         else cout << " ";
    //     }
    // }

    return 0;
}
/********  Main() Ends Here *************/

