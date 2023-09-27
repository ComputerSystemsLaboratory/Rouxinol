#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vull> vvull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    int n;
    cin >> n;
    vi ns(n-1);
    REP(i, n-1) cin >> ns[i];
    int ans;
    cin >> ans;

    vvull dp(2, vull(21, 0));
    dp[0][ns[0]] = 1;
    FOR(i, 1, n-1) {
        fill(ALL(dp[1]), 0);
        REP(j, 21) {
            if (dp[0][j] > 0) {
                int a;
                a = j + ns[i];
                if (0 <= a && a <= 20) dp[1][a] += dp[0][j];
                a = j - ns[i];
                if (0 <= a && a <= 20) dp[1][a] += dp[0][j];
            }
        }
        dp[0] = dp[1];
    }
    cout << dp[0][ans] << endl;
}