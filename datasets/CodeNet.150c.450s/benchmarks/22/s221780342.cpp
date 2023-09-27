// 単一始点全点間最短路を求めるアルゴリズム
// 不平路を検出した時は、空列を返す
// O(VE)


#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
#include <bitset>

using namespace std;
#define int long long int
const int INF = 1001001001001001LL;
const int MOD = 1000000007;

int di[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dj[] = {0, 1, 0, -1, 1, 1, -1, -1};


template<typename T>
vector<T> bellman_ford(vector<vector<pair<int, T>>> g, int s){

    int n = (int)g.size();
    // ここで怒られる場合は inf を自分で定義する
    const auto inf = numeric_limits<T>::max();
    vector<T> dist(n, inf);
    dist[s] = 0;
    for(int i = 0; i < n - 1; i++){
        for(int u = 0; u < n; u++){
            for(auto &e : g[u]){
                if(dist[u] == inf) continue;
                dist[e.first] = min(dist[e.first], dist[u] + e.second);
            }
        }
    }

    for(int u = 0; u < n; u++){
        for(auto &e : g[u]){
            if(dist[u] == inf) continue;
            if(dist[u] + e.second < dist[e.first]) return vector<T>();
        }
    }

    return dist;
}

signed main(){
    
    int n, m, r; cin >> n >> m >> r;
    vector<vector<pair<int, int>>> g(n);
    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        g[a].push_back({b, c});
    }

    auto dist = bellman_ford(g, r);
    if(dist.size() == 0) cout << "NEGATIVE CYCLE" << endl;
    else{
        for(int i = 0; i < n; i++){
            if(dist[i] == numeric_limits<int>::max()) cout << "INF" << endl;
            else cout << dist[i] << endl;
        }
    }

    return 0;
}

