#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define repr(i, n) REPR(i, n, 0)
#define REPR(i, s, e) for(int i=(int)(s-1); i>=(int)(e); i--)
#define pb push_back
#define all(r) r.begin(),r.end()
#define rall(r) r.rbegin(),r.rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1e9;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;

int d[11][6];
bool check[11][6];
int H;

void write() {
    rep(i, H) {
        rep(j, 5) cout << d[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
void fall() {
    rep(i, H) rep(j, 5) if (check[i][j]) d[i][j] = 0;
    repr(i, H) {
        rep(j, 5) {
            if (d[i][j] == 0) {
                bool update = true;
                while (update && d[i][j] == 0) {
                    update = false;
                    for (int k = i - 1; k >= 0; --k) {
                        d[k + 1][j] = d[k][j];
                        if(d[k][j] > 0) update = true;
                    }
                    d[0][j] = 0;
                }
            }
        }
    }
    // write();
}
int erase() {
    rep(i, 11) rep(j, 6) check[i][j] = 0;
    rep(i, H) {
        rep(j, 3) {
            if (d[i][j] > 0 && d[i][j] == d[i][j + 1] && d[i][j] == d[i][j + 2]) {
                check[i][j] = check[i][j + 1] = check[i][j + 2] = true;
            }
        }
    }
    int ret = 0;
    rep(i, H) rep(j, 5) if (check[i][j]) ret += d[i][j];
    fall();
    return ret;
}

int main() {
    while (cin >> H) {
        if (H == 0) break;
        rep(i, H) {
            rep(j, 5) cin >> d[i][j];
        }
        int s = 0;
        while (1) {
            int t = erase();

            if (t == 0) break;
            s += t;
        }
        cout << s << endl;
    }
    return 0;
}
