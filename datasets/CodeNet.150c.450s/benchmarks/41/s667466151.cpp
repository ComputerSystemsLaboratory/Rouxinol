#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i <= n; i++)
#define FORR(i, m, n) for(int i = m; i >= n; i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define VSORTR(v) sort(v.rbegin(), v.rend());
#define ALL(v) (v).begin(),(v).end()
 
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<ll, ll>;
using vvp = vector<vector<P>>;

template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

const ll mod = 1e9 + 7;
const ll inf = 1e18;

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    ll n, m;
    cin >> n >> m;
    vvll e(n, vll(n, inf));
    ll a, b, c;
    REP(i, m) {
        cin >> a >> b >> c;
        e[a][b] = c; // 有向
    }
    vvll d(n, vll(n, inf));
    REP(i, n) {
        d[i][i] = 0;
        REP(j, n) {
            chmin(d[i][j], e[i][j]);
        }
    }

    REP(k, n) {
        REP(i, n) {
            REP(j, n) {
                if (d[i][k] == inf || d[k][j] == inf) continue;
                chmin(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    REP(i, n) {
        if (d[i][i] < 0) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    REP(i, n) {
        REP(j, n) {
            if (d[i][j] == inf) cout << "INF";
            else cout << d[i][j];
            if (j != n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
