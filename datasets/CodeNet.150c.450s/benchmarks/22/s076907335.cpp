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
class BellmanFord {
    struct edge {
        int from;
        int to;
        T cost;
    };

public:
    T INF;

    BellmanFord(int V)
        : INF(std::numeric_limits<T>::max())
        , m_V(V) {
        m_es.clear();
    }

    void add_dir_edge(int from, int to, T cost) {
        m_es.push_back( edge{from, to, cost} );
    }

    void add_undir_twoways(int v1, int v2, T cost) {
        add_dir_edge(v1, v2, cost);
        add_dir_edge(v2, v1, cost);
    }

    // ??????s????????????????????§????????¢????¨??????????d???????´?
    vector<T> shortest_path(int s)
    {
        vector<T> d(m_V, INF);
        
        d[s] = 0;
        while (true) {
            bool update = false;
            REP(i, SIZE(m_es)) {
                edge e = m_es[i];
                if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                    d[e.to] = d[e.from] + e.cost;
                    update = true;
                }
            }
            if (!update) break;
        }

        return move(d);
    }

    // s????????????????????§??????????????????????????????????????????
    bool find_negative_loop_from_v(int s) {
        vector<T> d(m_V, INF);
        
        d[s] = 0;
        // ???????????????????????????|V|-1????????????
        // ???????????????????????°???|V|???????????§???????????°??????????????£?????¨?????????
        int count = 0;
        while (true) {
            bool update = false;
            REP(i, SIZE(m_es)) {
                edge e = m_es[i];
                if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                    d[e.to] = d[e.from] + e.cost;
                    update = true;
                }
            }
            if (!update) break;

            ++count;
            if (count > m_V) return true;
        }

        return false;
    }

    // ??°????????¨????????????????????????????????????????????¨?????????
    bool find_negative_loop_somewhere(void) {
        vector<T> d(m_V);

        REP(i, SIZE(d)) {
            REP(j, SIZE(m_es)) {
                edge e = m_es[j];
                if (d[e.to] > d[e.from] + e.cost){
                    d[e.to] = d[e.from] + e.cost;
                    // n??????????????´??°???????????????????????????????????¨??????
                    if (i == SIZE(d) - 1) {
                        return true;
                    }
                }
            }

            // for(int i = 0; i < SIZE(d); ++i) {
            //     cout << d[i] << ", ";
            // }
            // cout << endl;
        }
        return false;
    }

private:
    int m_V;                   
    vector<edge> m_es;
};


int main(){
    int V, E, r;
    cin >> V >> E >> r;

    BellmanFord<ll> bf(V);

    REP(e,E) {
        int v1, v2, cost;
        cin >> v1 >> v2 >> cost;
        bf.add_dir_edge(v1, v2, cost);
    }

    if (bf.find_negative_loop_from_v(r)) {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else {
        auto distances = bf.shortest_path(r);
        for(auto d : distances) {
            if (d == bf.INF) cout << "INF" << endl;
            else cout << d << endl;
        }
    }

    return 0;
}