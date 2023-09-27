#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned __int128 HASH;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef pair<ull, ull> pullull;
typedef pair<ll,int> plli;
typedef pair<double, int> pdbi;
typedef pair<int,pii> pipii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<pii> vpii;
typedef vector<vector<int>> mat;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

const ll hmod1 = 999999937;
const ll hmod2 = 1000000000 + 9;
const ll INF = 1<<30;
const ll mod = 10000 + 7;
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy8[8] = {0, 1, -1, 1, -1, 0, 1, -1};
const double pi = 3.141592653589793;

//#define int long long
#define addm(X, Y) (X) = ((X) + ((Y) % mod) + mod) % mod

int dp1[2][1000000 + 1];
int dp2[2][1000000 + 1];
vector<int> cnt1;
vector<int> cnt2;

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    rep2(i, 1, 200) {
        cnt1.push_back(i * (i + 1) * (i + 2) / 6);
        if ((i * (i + 1) * (i + 2) / 6)% 2 == 1) {
            cnt2.push_back(i * (i + 1) * (i + 2) / 6);
        }
    }
    int cur1 = 1, pre1 = 0;
    int cur2 = 1, pre2 = 0;
    rep(j, 1000000 + 1) {
        dp1[pre1][j] = INF;
        dp2[pre2][j] = INF;
    }
    dp1[0][0] = 0;
    dp2[0][0] = 0;
    rep(i, 200) {
        rep(j, 1000000 + 1) dp1[cur1][j] = INF;
        rep(j, 1000000 + 1) {
            dp1[cur1][j] = dp1[pre1][j];
            if (j - cnt1[i] >= 0) {
                dp1[cur1][j] = min(dp1[cur1][j], dp1[cur1][j - cnt1[i]] + 1);
            }
        }
        swap(cur1, pre1);
    }
    rep(i, cnt2.size()) {
        rep(j, 1000000 + 1) dp2[cur2][j] = INF;
        rep(j, 1000000 + 1) {
            dp2[cur2][j] = dp2[pre2][j];
            if (j - cnt2[i] >= 0) {
                dp2[cur2][j] = min(dp2[cur2][j], dp2[cur2][j - cnt2[i]] + 1);
            }
        }
        swap(cur2, pre2);
    }
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        cout << dp1[pre2][n] << " " << dp2[pre2][n] << endl;
    }
}