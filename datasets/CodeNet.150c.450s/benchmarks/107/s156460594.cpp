#include <stdio.h>
#include <bits/stdc++.h>

#define pb push_back
#define pf push_front
#define pp pop_back
#define sz(a) (int)(a.size())
#define mp make_pair
#define F first
#define S second
#define next _next
#define prev _prev
#define left _left
#define right _right
#define y1 _y1
#define all(x) x.begin(), x.end()
#define what_is(x) #x << " is " << (x)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = (int)1e5 + 123;
const ll INF = (ll)1e18 + 123;
const int inf = (int)1e9 + 123;
const int MOD = (int)1e9 + 7;

int occ[256], dp[1111][1111];
string s1, s2;

int main() {
    cin >> s1 >> s2;
    for(int j = 1; j <= sz(s2); j ++)
        dp[0][j] = j;
    for(int i = 1; i <= sz(s1); i ++)
        dp[i][0] = i;
    for(int i = 1; i <= sz(s1); i ++) {
        for(int j = 1; j <= sz(s2); j ++) {
            occ[s2[j - 1]] = j;
            dp[i][j] = dp[i - 1][j - 1] + (1 ? s1[i - 1] != s2[j - 1] : 0);
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
            if(occ[s1[i - 1]])
                dp[i][j] = min(dp[i][j], dp[i][occ[s1[i - 1]]] + j - occ[s1[i - 1]]);
            // cout << "dp[" << i << "][" << j << "]: " << dp[i][j] << ' ' << occ[s1[i - 1]] << '\n';
        }
        memset(occ, 0, sizeof occ);
    }
    cout << dp[sz(s1)][sz(s2)] << '\n';
    return 0;
}

