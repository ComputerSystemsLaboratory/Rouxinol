#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <climits>

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())

#define pb push_back
#define mp make_pair

// ?????????0-origin??¨??????
template <typename T>
class Dijkstra {
    struct edge { int to; T cost; };
    typedef pair<T, int> P; // <???????????¢, ????????????>

public:
    T INF;

    Dijkstra(int V) 
        : INF(std::numeric_limits<T>::max())
        , m_V(V)
        {
        m_G.resize(m_V);
    }

    // a -> b?????????????????¨???????????????
    void add_dir_edge(int a, int b, T cost) {
        m_G[a].push_back( edge{ b, cost } );
    }

    // a <-> b?????????????????¨???????????????
    void add_undir_edge(int a, int b, int cost) {
        add_dir_edge(a, b, cost);
        add_dir_edge(b, a, cost);
    }

    // ??????s????????????????????§????????¢????¨????????????????
    vector<T> shortest_path(int s) {
        vector<T> d(m_V, INF);
        priority_queue<P, vector<P>, greater<P> > que;
        d[s] = 0;
        que.push(P(0, s));
    
        while(!que.empty()) {
            P p = que.top();
            que.pop();

            T dist = p.first;
            int v = p.second;
            if (d[v] < dist) continue;
            REP(i, m_G[v].size()) {
                edge e = m_G[v][i];
                if (d[e.to] > d[v] + e.cost) {
                    d[e.to] = d[v] + e.cost;
                    que.push(P(d[e.to], e.to));
                }
            }
        }

        return d;
    }

private:
    int m_V;
    vector<vector<edge> > m_G;
};


int main(){
    int V, E, r;
    cin >> V >> E >> r;
    Dijkstra<int> dij(V);

    REP(e,E) {
        int v1, v2, cost;
        cin >> v1 >> v2 >> cost;
        dij.add_dir_edge(v1, v2, cost);
    }

    auto distances = dij.shortest_path(r);
    for(auto d : distances) {
        if (d == dij.INF) cout << "INF" << endl;
        else cout << d << endl;
    }

    return 0;
}