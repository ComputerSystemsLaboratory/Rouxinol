#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define debug(a, n) rep(hoge, n) printf("%d%c", a[hoge], hoge == n - 1? '\n' : ' ');
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define ln(a) cout << (a) << endl
#define INF 1000000000
#define MOD 1000000007

using namespace std;
using ll = long long;
using P = pair<int, int>;
using DP = pair<double, double>;
using ILP = pair<int, ll>;

struct bit {
    int n;
    int* dat;

    bit(int _n) {
        n = 1;
        while(n < _n) n *= 2;
        dat = new int[n + 1];
        fill(dat + 1, dat + n + 1, 0);
    }

    void update(int i, int x) {
        while(i <= n) {
            dat[i] += x;
            i += i & -i;
        }
    }

    int query(int i) {
        int res = 0;
        while(i > 0) {
            res += dat[i];
            i -= i & -i;
        }
        return res;
    }
};

signed main() {
    int n;
    scanf("%d", &n);
    scanf("\n");
    int* a = new int[n];
    rep(i, n) scanf("%d", &a[i]);

    vector<int> v;
    rep(i, n) v.pb(a[i]);
    sort(all(v));
    rep(i, n) a[i] = lower_bound(all(v), a[i]) - v.begin() + 1;


    bit bt(n);
    ll ans = 0;
    rep(i, n) {
        ans += i - bt.query(a[i]);
        bt.update(a[i], 1);
    }

    ln(ans);
}

