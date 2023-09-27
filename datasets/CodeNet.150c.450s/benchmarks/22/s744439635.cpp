/*
　　　  ∧＿∧　やあ
　　 （´・ω・｀)　　　　　/　　　　　ようこそ、バーボンハウスへ。
　　 ／∇y:::::＼　　　 [￣]　　　　　このテキーラはサービスだから、まず飲んで落ち着いて欲しい。
　　 |:⊃:|:::::|　　　|──|
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|　うん、「また」なんだ。済まない。
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣|￣　  仏の顔もって言うしね、謝って許してもらおうとも思っていない。
￣￣￣￣￣￣￣￣￣￣￣￣￣￣／|
　　　　∇　∇　∇　∇　　　／.／|　　　でも、この提出を見たとき、君は、きっと言葉では言い表せない
　　　　┴　┴　┴　┴　／ ／　  |　　　「ときめき」みたいなものを感じてくれたと思う。
￣￣￣￣￣￣￣￣￣￣|／　　  |　　　殺伐としたコンテストの中で、そういう気持ちを忘れないで欲しい
￣￣￣￣￣￣￣￣￣￣　　　　 |　　　そう思って、この提出を投げたんだ。
　　　(⊆⊇)　(⊆⊇)　(⊆⊇)　　|
　    ||　　 ||　　||　　|　　　 じゃあ、判定を聞こうか。
　　.／|＼　／|＼ ／|＼
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define fst first
#define snd second
#define mp make_pair
#define ALL(obj) (obj).begin(),(obj).end()
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i = (b-1);i>=a;i--)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n) 
#define SIZE(x) ((int)(x).size())
#define debug(x) cerr << #x << " -> " << x << " (line:" << __LINE__ << ")" << '\n';
#define debugpair(x, y) cerr << "(" << #x << ", " << #y << ") -> (" << x << ", " << y << ") (line:" << __LINE__ << ")" << '\n';
typedef long long lint;
typedef pair<int, int> pint;
typedef pair<lint, lint> plint;
typedef vector<lint> vec;
typedef vector<vector<lint>> matrix;
typedef priority_queue<lint> p_que;
typedef priority_queue<lint, vector<lint>, greater<lint>> p_que_rev;
const lint INF = INT_MAX;
//const lint LINF = LLONG_MAX;
const lint MOD = 1000000000 + 7;
const double EPS = 1e-9;
const double PI = acos(-1);
const int di[]{0, -1, 0, 1, -1, -1, 1, 1};
const int dj[]{1, 0, -1, 0, 1, -1, -1, 1};

// Graph Templates
using Weight = lint;
// using Flow = int;
struct Edge {
    int src, dst;
    Weight weight;
    // Flow cap;
    Edge() : src(0), dst(0), weight(0) {}
    Edge(int s, int d, Weight w) : src(s), dst(d), weight(w) {}
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;
using Array = vector<Weight>;
using Matrix = vector<Array>;
const Weight LINF = (1LL)<<50;

// add edge a <--(weight = w)--> b
void add_edge(Graph &g, int a, int b, Weight w) {
    g[a].push_back(Edge(a, b, w));
    g[b].push_back(Edge(b, a, w));
}

// add edge a --(weight = w)--> b
void add_arc(Graph &g, int a, int b, Weight w) { g[a].push_back(Edge(a, b, w)); }

// bellmanFord
// if the graph contains a negative cycle, return hasNegCycle(bool) is "true".
pair<vector<Weight>, bool> bellmanford(Graph &g, int s){
    int n = g.size(); // the number of vertices
    vector<Weight> dist(n, LINF);
    Edges es;
    bool hasNegCycle = false;
    dist[s] = 0;
    for (int i=0; i<n; ++i){
        for (auto e : g[i]){
            es.push_back(e);
        }
    }
    for (int t=0; t<n-1; ++t){
        for (auto e : es){
            if(dist[e.src] != LINF){
                dist[e.dst] = min(dist[e.dst], dist[e.src] + e.weight);
            }
        }
    }
    for (int t=0; t<n; ++t){
        for (auto e : es){
            if(dist[e.src] != LINF && dist[e.dst] > dist[e.src] + e.weight){
                dist[e.dst] = -LINF;
            }
            if(dist[e.src] == -LINF){
                dist[e.dst] = -LINF;
            }
        }
    }
    for (int i=0; i<n; ++i){
        if(dist[i] <= -LINF){
            hasNegCycle = true;
        }
    }
    return make_pair(dist, hasNegCycle);
}

int main(){
    int v, e, r;
    cin >> v >> e >> r;
    Graph g;
    g.resize(v);
    int s, t;
    Weight d;
    for (int i=0; i<e; ++i){
        cin >> s >> t >> d;
        add_arc(g, s, t, d);
    }
    auto ans = bellmanford(g, r);
    if(ans.snd){
        cout << "NEGATIVE CYCLE" << endl;
    }
    else {
        for (int i=0; i<v; ++i){
            if(ans.fst[i] == LINF){
                cout << "INF" << endl;
            }
            else {
                cout << ans.fst[i] << endl;
            }
        }
    }
    return 0;
}
