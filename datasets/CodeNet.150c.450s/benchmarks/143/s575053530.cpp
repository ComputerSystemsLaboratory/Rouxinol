#include <bits/stdc++.h>
using namespace std;
// types
typedef long long ll; 
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;
// IO
#define fo(i, n) for (int i = 0; i < n; i++)
#define fo1(i, n) for (int i = 1; i <= n; i++)
#define sc(n) scanf("%d", &n) 
#define sca(a, n) fo(i, n) sc(a[i])
#define pd(a) printf("%d ", a)
#define pld(a) printf("%d\n", a)
#define pda(a, n) fo(i, n) pd(a[i])
#define pl printf("\n")
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b) 
void Yes() {printf("Yes\n");}
void No() {printf("No\n");}
// math
const ll mod = 1e9+7;
template<typename T> T gcf(T a, T b) {return (b == 0) ? a : gcf(b, a%b);} 
template<typename T> T lcm(T a, T b) {return (a*b)/gcf(a, b);}
template<typename T> T sumTo(T x) {return x * (x+1) / 2;}
template<typename T> T sumSquaresTo(T x) {return x * (x+1) * (2*x+1) / 6;}
template<typename T> T ceilDiv(T n, T d) {return (n+d-1)/d;}

const int MAXN = 1e5+50;
ll num[MAXN];

void solve() {
    fo(i, MAXN) num[i] = (ll) 0;
    int n; cin >> n;
    ll sum = 0;
    fo(i, n) {
        int ai;
        cin >> ai;
        num[ai]++;
        sum += ai;
    }   
    int q; cin >> q;
    while (q--) {
        int bi, ci; cin>>bi>>ci;
        ll change = num[bi];
        num[ci] += change;
        num[bi] = 0;
        sum += change * (ci-bi);
        cout << sum << '\n';
    }
}

int main() {
    int t = 1;
    //scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}