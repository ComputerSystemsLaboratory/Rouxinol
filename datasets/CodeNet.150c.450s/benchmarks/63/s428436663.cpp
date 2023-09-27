#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <string>

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define var auto
#define mod 1000000007
#define inf 2147483647
#define INF 1e17
#define nil -1
typedef long long ll;

using namespace std;

inline int input(){
    int a;
    cin >> a;
    return a;
}

template <typename T>
inline void output(T a, int p) {
    if(p){
        cout << fixed << setprecision(p)  << a << "\n";
    }
    else{
        cout << a << "\n";
    }
}

// end of template

int main() {
    cin.tie(0);
    // source code
    
    int V = input();
    int E = input();
    int r = input();
    
    vector<ll> dp(V, INF);
    dp[r] = 0;
    vector<vector<pair<int, int>>> edge(V);
    int v1, v2, d;
    rep(i, E){
        cin >> v1 >> v2 >> d;
        edge[v1].push_back(make_pair(v2, d));
    }
    
    priority_queue<pair<int, int>> q; // dist, vertex
    vector<int> vis(V, 0);
    q.push(make_pair(0, r));
    vis[r] = 1;
    
    while (!q.empty()) {
        var t = q.top();
        q.pop();
        int dist = t.first;
        int ver = t.second;
        vis[ver] = 2;
        
        if (dp[ver] < dist * (-1)) {
            continue;
        }
        
        rep(i, edge[ver].size()){
            int v = edge[ver][i].first;
            if (vis[v] == 2) {
                continue;
            }
            if (dp[v] > dp[ver] + edge[ver][i].second) {
                dp[v] = dp[ver] + edge[ver][i].second;
                q.push(make_pair(dp[v] * (-1), v));
                vis[v] = 1;
            }
        }
        
    }
    
    rep(i, V){
        if (dp[i] == INF) {
            output("INF", 0);
        }
        else{
            output(dp[i], 0);
        }
    }
    
    
    return 0;
}