#include <bits/stdc++.h>
 
using namespace std;

using usize = ::std::size_t;
using u64 = ::std::int_least64_t;
//using u64 = int;
static constexpr u64 Inf = ::std::numeric_limits<u64>::max() / 2;

u64 n, E;
u64 d[10000][10000], w[10000][10000];
bool negative_cycle = false;

void floydWarshall(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            d[i][j] = w[i][j];
        }
    }
    for (int k = 1; k <= n; k++){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                if(k == n && i == j && d[i][j] < 0) {
                    negative_cycle = true;
                }
            }
        }
    }
    return;
}

int main(int argc, char *argv[])
{
    // input from txt （提出時にこの箇所は削除すること）
    //ifstream in("in.txt");
    //cin.rdbuf(in.rdbuf());
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> n >> E;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            w[i][j] = (i == j) ? 0 : Inf;
        }
    }
    
    for (int i = 1; i <= E; i++) {
        int u, v;
        cin >> u >> v;
        u++;
        v++;
        cin >> w[u][v];
    }
    floydWarshall();
    if(!negative_cycle){
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if(d[i][j] >= Inf/2) {
                    cout << "INF";
                } else {
                    cout << d[i][j];
                }
                if (j == n) {
                    cout << endl;
                }
                else {
                    cout << " ";
                }
            }
        }
    } else {
        cout << "NEGATIVE CYCLE" << endl;
    }
    
    return 0;
}

