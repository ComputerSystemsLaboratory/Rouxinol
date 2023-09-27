#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <queue>
#include <stack>
#include <climits>
#include <map>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;
const int inf = 1e9;
const long long INF = 1LL << 60;

const int MAX_N = 105;
int g[MAX_N][MAX_N];
int d[MAX_N];
bool used[MAX_N];
int n;

void dijkstra(int s){
    fill(d,d+n,inf);
    fill(used,used+n,false);
    d[s] = 0;

    while(true){
        int v = -1;
        for(int u = 0; u < n; u++){
            if(!used[u] && (v == -1 || d[u] < d[v])){
                // 1番最小のd[u]となるuを、v = u　として保存
                // ループを抜けた後に、vを介して[u]を更新
                v = u;
            }
        }
        //　この時点でd[u]が最小となるuは決定されている。
        if(v == -1) break;
        used[v] = true;
        for(int u = 0; u < n; u++){
            d[u] = min(d[u],d[v] + g[v][u]);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            g[i][j] = inf;
        }
    }
    for(int i = 0; i < n; i++){
        int u,k;cin >> u >> k;
        for(int j = 0; j < k ;j++){
            int v,c; cin >> v >> c;
            g[u][v] = c;
        }
    }
    dijkstra(0);
    for(int i = 0; i < n; i++){
        cout << i << ' ' << d[i] << endl;
    }
}
