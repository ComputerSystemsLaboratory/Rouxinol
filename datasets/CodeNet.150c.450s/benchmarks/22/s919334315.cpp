#include <bits/stdc++.h>

#define REP(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define FOR(i, b, e) for(int (i) = (b); (i) < (e); ++(i))
#define ALL(c) (c).begin(), (c).end()
#define ACC(c) (accumulate(ALL(c), 0LL))
#define ENDL "\n"
#define PRINT(x) cout << (x) << ENDL

using namespace std;
using ll = long long;
using pint = pair<int, int>;
using pll = pair<ll, ll>;

inline int in(int& a) {return scanf("%d", &a);}
inline void out(int n) {printf("%d\n", n);}
auto pint_compare = [](pint x, pint y) -> bool{return (x.first < y.first);};


struct edge{
    int x, y, cost;
};

int V, E;
int dist[1000];
vector<edge> es;

bool bellmanford(int s){
    REP(i, V) dist[i] = INT32_MAX;
    dist[s] = 0;
    bool update = false;
    REP(i, V){
        update = false;
        for(auto e : es){
            if(dist[e.x] + e.cost < dist[e.y] && dist[e.x] < INT32_MAX){
                dist[e.y] = dist[e.x] + e.cost;
                update = true;
            }
        }
        if(i == V - 1 && update) return false;
    }
    return true;
}

signed main(){
    int r, s, t, d;
    cin >> V >> E >> r;
    REP(i, E){
        cin >> s >> t >> d;
        es.push_back({s, t, d});
    }
    if(!bellmanford(r)){
        PRINT("NEGATIVE CYCLE");
    }else{
        REP(i, V){
            if(dist[i] < INT32_MAX) PRINT(dist[i]);
            else PRINT("INF");
        }
    }
    return 0;
}
