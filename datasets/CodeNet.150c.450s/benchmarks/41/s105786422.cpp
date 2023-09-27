#include<iostream>
#include <vector>
#include<algorithm>
#include <queue>
#include<climits>
#define rep(i, a) for(int i=0; i<(int)(a); i++)
using namespace std;
long long int d[100][100];int v, n, c, e,u;
const long long int INF = (1LL<<32);
void warshall_floyd(int n) { // nは頂点数
    rep(k,n) {  // 経由する頂点
        rep(i,n) { 
            if (d[i][k] == INF) continue;// 開始頂点
            rep(j,n) {// 終端
                if (d[k][j] == INF) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
int main()
{
    cin >> n >> e;
    rep(i, n) {
        rep(j, n) {
            d[i][j] = ((i == j) ? 0 : INF);
        }
    }
    rep(i, e) {
        cin >> u >> v >> c;
        d[u][v] = c;
    }
    warshall_floyd(n);
    bool ne = false;
    rep(i, n) if (d[i][i] < 0) ne = true;
    if (ne)cout << "NEGATIVE CYCLE" << endl;
    else {
        rep(i, n) {
            rep(j, n) {
                if (j) cout << " ";
                if (d[i][j] == INF) cout << "INF";
                else cout << d[i][j];
            }
            cout << endl;
            }
        }
    }
