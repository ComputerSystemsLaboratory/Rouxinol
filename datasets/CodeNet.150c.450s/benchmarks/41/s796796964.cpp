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

template <typename T>
class WarshallFloyd {
private:
    int m_V;                   
    vector<vector<T>> m_d;
    
public:
    T INF;
    
    WarshallFloyd(int V)
        : INF(std::numeric_limits<T>::max()/2)
        , m_V(V) {

        // ???????????????????????????
        // ???????????¨???????????¨??????INF??¨??????
        m_d.resize(m_V, vector<T>(m_V, INF));
        REP(i,V) m_d[i][i] = 0;
    }

    void add_dir_edge(int from, int to, int cost) {
        m_d[from][to] = cost;
    }

    void add_undir_twoways(int v1, int v2, int cost) {
        add_dir_edge(v1, v2, cost);
        add_dir_edge(v2, v1, cost);
    }

    // ??¨????????????????????¢????±???????
    vector<vector<T>> shortest_path() {
        REP(k, m_V){
            REP(i, m_V){
                REP(j, m_V){
                    // ???????????¨????????¨?????????????????§??????
                    if(m_d[i][k] != INF && m_d[k][j] != INF)
                        m_d[i][j] = min(m_d[i][j], m_d[i][k] + m_d[k][j]);
                }
            }
        }
        return m_d;
    }

    // shortest_path?????????????????¨????????¶?????¨
    bool has_negative_loop() {
        REP(i, m_V) {
            if (m_d[i][i] < 0) return true;
        }
        return false;
    }
};


int main(){
    int V, E;
    cin >> V >> E;

    WarshallFloyd<ll> wf(V);

    REP(e,E) {
        int v1, v2, cost;
        cin >> v1 >> v2 >> cost;
        wf.add_dir_edge(v1, v2, cost);
    }

    auto d = wf.shortest_path();

    if (wf.has_negative_loop()) {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else {
        REP(i,V) {
            REP(j,V) {
                if (d[i][j] == wf.INF) cout << "INF";
                else cout << d[i][j];
                    
                if (j == V-1) cout << endl;
                else cout << " ";
            }
        }
    }

    return 0;
}