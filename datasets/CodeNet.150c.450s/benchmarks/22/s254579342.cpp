// 2020 04 11 p95 Bellman-Ford for shortest path, GRL_1_B
// DAG : 有向非巡回グラフ, Directed acyclic graph
// 主に負のコストを持つ辺があるときに用いられる
// O(V*E)
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B&lang=jp
#include <algorithm>
#include <complex>
#include <string>
#include <deque>
#include <iostream>
#include <set>
#include <stack>
#include <string>
#include <queue>
#include <utility>
#include <vector>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 100000000;

struct Edge{   
    // B-F は辺を1つ選んでcostを計算していく
    int from;
    int to;
    int weight;
    Edge(int f, int t, int w) : from(f), to(t), weight(w) {}
};

using Graph = vector<vector<Edge>>;


int main() {
    int V, E, r;
    cin >> V >> E >> r;
    if (E == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<Edge> e;
    vector<int> d(V, INF); // Shortest distance
    d[r] = 0;
    rep(i, E){
        int from, to, weight;
        cin >> from >> to >> weight;
        e.push_back(Edge(from, to, weight));
    }

    // Bellman-Ford
    bool neg_loop = false; // trueなら負の閉路が存在する
    int cnt = 0;    // while-loopは高々V-1回しか繰り返されない
    while(true) {
        // cout << cnt << endl;
        bool update = false;
        if(cnt >= V-1) {
            neg_loop = true;
            break;
        }
        rep(i, E) {
            if (d[e[i].from] != INF && d[e[i].to] > d[e[i].from] + e[i].weight) {
                d[e[i].to] = d[e[i].from] + e[i].weight;
                update = true;
            }
        }
        cnt++;
        if (!update) break;
    }


    if (neg_loop) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; i++){
            if (d[i] == INF) {
                cout << "INF" << endl;
            }else{
                cout << d[i] << endl;
            }
        }
        
    }


    return 0;
}
