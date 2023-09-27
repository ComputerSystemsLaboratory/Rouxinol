#include <iostream>
#include <vector>
#include <queue>
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

typedef pair<int,int> Pii;


const int INF = 1e9;

int edge[1010][1010];


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;
    FOR(i, V) FOR(j, V) edge[i][j] = INF;
    FOR(i, V) edge[i][i] = 0;
    FOR(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        edge[s][t] = d;
    }

    FOR(k, V) FOR(i, V) FOR(j, V) {
        if (edge[i][k] != INF && edge[k][j] != INF) {
            edge[i][j] = min(edge[i][j], edge[i][k]+edge[k][j]);
            if (i == j && edge[i][j] < 0 && edge[r][j]<INF) goto NC;
        }
    }
    FOR(i, V) {
        if (edge[r][i] == INF) cout << "INF";
        else cout << edge[r][i];
        cout << '\n';
    }
    return 0;

    NC:
    cout << "NEGATIVE CYCLE" << endl;
    
    return 0;
}