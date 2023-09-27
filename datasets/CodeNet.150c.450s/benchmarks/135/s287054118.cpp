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


signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while (true) {
        int n, m;
        cin >> n >> m;
        int h[1505] = {}, w[1505] = {};
        int sumh[1505] = {}, sumw[1505] = {};
        map<int, int> hh;
        ll ans = 0;
        if (n == 0 ) break;
        rep(i, n) cin >> h[i];
        rep(i, m) cin >> w[i];
        rep(i, n) sumh[i + 1] = sumh[i] + h[i];
        rep(i, m) sumw[i + 1] = sumw[i] + w[i];
        rep(i, n)rep2(j, i + 1, n + 1) {
            hh[sumh[j] - sumh[i]]++;
        }
        rep(i, m)rep2(j, i + 1, m + 1) {
            ans += hh[sumw[j] - sumw[i]];
        }
        cout << ans << endl;
    }
}