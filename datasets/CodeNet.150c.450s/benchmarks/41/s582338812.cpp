#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define vi vector<int>
#define vl vector<long long>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPD(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORD(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define INF 1e18
#define MOD 1e9+7

template<class T> bool chmax(T &a, const T & b) {
    if (a<b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> bool chmin(T &a, const T & b) {
    if (a>b) {
        a = b;
        return true;
    }
    return false;
}

const int MAX_N = 110;
struct edge {int to, cost;};
//vector < vector<int> > G;
vector< vector<edge> > es;
ll d[MAX_N][MAX_N];
int V, E;

void warshallfloyd() {
    REP(j, V) {
        REP(i, V) {
            if (d[i][j] == INF) continue;
            REP(k, V) {
                if (d[j][k] == INF) continue;
                chmin(d[i][k], d[i][j]+d[j][k]);
            }
        }
    }
}

int main() {
    cin >> V >> E;
    es.resize(V);
    REP(i, V) {
        REP(j, V) {
            if (i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }
    REP(i, E) {
        int s, t, w;
        cin >> s >> t >> w;
        d[s][t] = w;
    }
    warshallfloyd();
    REP(i, V) {
        if (d[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    REP(i, V) {
        REP(j, V) {
            if (j == V-1) {
                if (d[i][j] == INF) cout << "INF" << endl;
                else cout << d[i][j] << endl;
            } else {
                if (d[i][j] == INF) cout << "INF" << ' ';
                else cout << d[i][j] << ' ';
            }
        }
    }
    return 0;
}
