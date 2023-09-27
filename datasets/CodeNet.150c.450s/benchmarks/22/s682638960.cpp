#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef pair<ll, P> P3;
typedef pair<P, P> PP;
constexpr ll MOD = ll(1e9 + 7);
constexpr int IINF = INT_MAX;
constexpr ll LLINF = LLONG_MAX;
constexpr int MAX_N = int(1e5) + 5;
constexpr double EPS = 1e-9;
constexpr int di[] = {0, 1, 0, -1}, dj[] = {1, 0, -1, 0};
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i > 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define ALL(v) (v).begin(), (v).end()

int main() {
    int V, E, root;
    cin >> V >> E >> root;
    vector<vector<P> > g(V);
    for(int i=0;i<E;i++){
        ll s, t, d;
        cin >> s >> t >> d;
        g[s].push_back({t, d});
    }
    vector<ll> dist(V, IINF);
    vector<bool> visited(V, false);
    dist[root] = 0;
    visited[root] = true;
    int cnt = 0;
    bool update = true, neg = false;
    while(update){
        update = false;
        for(int i=0;i<V;i++){
            for(auto e : g[i]){
                ll u = e.first, d = e.second;
                if(dist[u] > dist[i] + d){
                    if(visited[i]){
                        visited[u] = true;
                        dist[u] = dist[i] + d;
                        update = true;
                    }
                }
            }
        }
        cnt++;
        if(cnt > V && update){
            neg = true;
            break;
        }
    }
    if(neg){
        cout << "NEGATIVE CYCLE" << endl;
    }
    else{
        for(int i=0;i<V;i++){
            if(visited[i]){
                cout << dist[i] << endl;
            }
            else{
                cout << "INF" << endl;
            }
        }
    }
    return 0;
}

