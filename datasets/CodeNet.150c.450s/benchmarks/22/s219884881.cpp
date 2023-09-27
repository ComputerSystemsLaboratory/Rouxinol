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

struct Root
{
    int from, to, cost;
};


struct Edge
{
    int to, cost;
};

int V, E, r;
vector<Root> root;
vector<vector<Edge> > g;



bool Find_Negative_Root(){
    vector<int> dist(V, MM);
    int cnt = 0;
    queue<int> que;
    dist[r] = 0;
    for (int i = 0; i < V; i++){
        for (int j = 0; j < E; j++){
            Root cur = root[j];
            if (dist[cur.from] != MM && dist[cur.to] > dist[cur.from] + cur.cost){
                dist[cur.to] = dist[cur.from] + cur.cost;
                if (i == V-1){
                    return true;
                }
            }
        }
    }
    return false;
}


int main(){
    cin >> V >> E >> r; 
    g.resize(V);
    vector<int> Cost(V, MM);
    root.resize(E);
    for (int i = 0; i < E; i++){
        int s, t, d; cin >> s >> t >> d; 
        Edge e; e.to = t; e.cost = d;
        Root now; now.from = s, now.to = t, now.cost = d;
        root[i] = now;
        g[s].push_back(e);
    }

    if (g[r].size() == 0){
        for (int i = 0; i < V; i++){
            if (i == r) cout << 0 << endl;
            else cout << "INF" << endl;
        }
        return 0;
    }
    if (Find_Negative_Root()){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    Cost[r] = 0;
    queue<int> que;
    que.push(r);
    while (que.size()){
        int now = que.front();
        que.pop();
        for (int i = 0; i < g[now].size(); i++){
            Edge cur = g[now][i];
            if (Cost[cur.to] > Cost[now] + cur.cost){
                Cost[cur.to] = Cost[now] + cur.cost;
                que.push(cur.to);
            }
        }
    }
    for (int i = 0; i < V; i++){
        if (Cost[i] == MM) cout << "INF" << endl;
        else cout << Cost[i] << endl;
    }
}
