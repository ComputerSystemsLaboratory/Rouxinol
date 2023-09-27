#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <stack>
#include <numeric>
#include <algorithm>
#include <tuple>
#include <stdio.h>
#include <bitset>
#include <limits.h>
#include <complex>
#include <deque>
#include <iomanip>
#include <list>
#include <cstring>
using namespace std;
#define pi pair<int,int>
#define pl pair<long long,long long>
#define chmax(a,b) (a<b ? a=b:0)
#define chmin(a,b) (a>b ? a=b:0)
#define en cout << endl //セミコロンつけろ
//#define MM 1000000000
//#define MOD MM+7
typedef long long ll;
const int MM = 1e9;
const int MOD = MM+7;
const long double PI = acos(-1);
const long long INF = 1e15;
int dx[8] = {-1,0,1,0,-1,-1,1,1};
int dy[8] = {0,-1,0,1,-1,1,1,-1};
// 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122

template<typename T> //最大公約数
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}
template<typename T> //最小公倍数
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}

struct Edge
{
    int to, cost;
};


int main(){
    int V, E; cin >> V >> E;
    vector<vector<Edge> > g(V);
    for (int i = 0; i < E; i++){
        int s, t, w; cin >> s >> t >> w;
        Edge e; e.to = t; e.cost = w;
        g[s].push_back(e);
        e.to = s;
        g[t].push_back(e);
    }    
    int allCost = 0;
    vector<int> minCost(V, MM);
    minCost[0] = 0;
    vector<bool> visited(V, false);

    while (true){
        int v = -1;
        for (int u = 0; u < V; u++){
            //距離が最小の頂点を探す
            if (!visited[u] && (v == -1 || minCost[u] < minCost[v])) v = u;
        }
        if (v == -1) break;
        visited[v] = true;
        allCost += minCost[v];
        for (int u = 0; u < g[v].size(); u++){
            Edge now = g[v][u];
            minCost[now.to] = min(minCost[now.to], now.cost); 
        }
    }
    cout << allCost << endl;
}
