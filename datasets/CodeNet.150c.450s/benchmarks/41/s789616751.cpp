/*
All Pairs Shortest Path | Aizu Online Judge
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C
 */
#include <iostream>
#include <limits>

#define FORR(i,b,e) for(int i=(b);i<(int)(e);++i)
#define FOR(i,e) FORR(i,0,e)
#define dump(var) cerr << #var ": " << var << "\n"
#define dumpc(con) for(auto& e: con) cerr << e << " "; cerr<<"\n"

typedef long long ll;
typedef unsigned long long ull;

const double EPS = 1e-6;
const int d4[] = {0, -1, 0, 1, 0};

using namespace std;

const ll INF = numeric_limits<ll>::max();
ll dist[110][110];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E;
    cin >> V >> E;
    FOR(i, V) FOR(j, V) dist[i][j] = INF;
    FOR(i, V) dist[i][i] = 0;
    FOR(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }

    FOR(k, V) FOR(i, V) FOR(j, V) {
        if (dist[i][k] != INF && dist[k][j] != INF) {
            dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            if (i == j && dist[i][j] < 0) goto NC;
        }
    }
    {
        auto p = [](ll d){
            if (d == INF) cout << "INF";
            else cout << d;
        };
        FOR(i, V) {
            p(dist[i][0]);
            FORR(j, 1, V) cout << ' ', p(dist[i][j]);
            cout << '\n';
        }
    }
    return 0;

    NC:
    cout << "NEGATIVE CYCLE" << endl;

    return 0;
}