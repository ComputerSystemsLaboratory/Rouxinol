#include <bits/stdc++.h>
using namespace std;
#define int long long

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

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()

const ll hmod1 = 999999937;
const ll hmod2 = 1000000000 + 9;
const ll INF = 1<<30;
const ll mod = 1000000000 + 7;
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 1, 0, 0, -1, -1, -1};
const int dy8[8] = {0, 1, -1, 1, -1, 0, 1, -1};
const double pi = 3.141592653589793;

int a, b;
int n;
int x[50], y[50];

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cin >> n;
        rep(i, n) cin >> x[i] >> y[i];
        ll dp[20][20] = {};
        dp[0][0] = 1;
        rep(i, b)rep(j, a) {
            bool ok = true;
            rep(k, n) {
                if (y[k] == i + 1 && x[k] == j + 1) {
                    ok = false;
                    break;
                }
            }
            if (!ok) continue;
            if (i > 0) dp[i][j] += dp[i - 1][j];
            if (j > 0) dp[i][j] += dp[i][j - 1];
        }
        cout << dp[b - 1][a - 1] << endl;
    }
}