#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pll> vp;
typedef vector<ll> vll;

const int inf = 1e6;
const int MAX = 1e6;

int dp1[MAX];
int dp2[MAX];

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    vi a1;
    vi a2;

    a1.emplace_back(1);
    a2.emplace_back(1);
    rep2(i, 1, 300) {
        int x = i * (i + 1) * (i + 2) / 6;
        if (x >= MAX) break;
        a1.emplace_back(x);
        if (x & 1) a2.emplace_back(x);
    }

    fill(dp1, dp1 + MAX, inf);
    dp1[0] = 0;
    for (int x : a1) {
        rep2(i, x, MAX) {
            dp1[i] = min(dp1[i], dp1[i - x] + 1);
        }
    }

    fill(dp2, dp2 + MAX, inf);
    dp2[0] = 0;
    for (int x : a2) {
        rep2(i, x, MAX) {
            dp2[i] = min(dp2[i], dp2[i - x] + 1);
        }
    }


    int n;
    while (cin >> n && n) {
        cout << dp1[n] << " " << dp2[n] << endl;
    }

}