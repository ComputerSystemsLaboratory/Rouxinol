#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
#define INF 1LL<<60


int main() {
    int N, M;
    cin >> N >> M;
    vector< vector<ll> > dist(N, vector<ll>(N, INF));
    REP(i, N) dist[i][i] = 0;
    REP(i, M) {
        int s, t;
        ll d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }

    
    REP(k, N)
        REP(i, N)
            REP(j, N)
                if(dist[i][j] > dist[i][k] + dist[k][j] && dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = dist[i][k] + dist[k][j];

    REP(i, N)
        if(dist[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }

    REP(i, N) {
        REP(j, N) {
            if(j != 0) cout << " ";
            if(dist[i][j] == INF)
                cout << "INF";
            else
                cout << dist[i][j];
        }
        cout << endl;
    }
    return 0;
}
