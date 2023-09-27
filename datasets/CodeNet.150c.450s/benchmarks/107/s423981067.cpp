// ?????¬???????????¬??????

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

// ??¨????????¢ (??¬??????????????\??????????????¢)
int dp[1010][1010];
int editDistance(string s, string t) {
    int n = s.length(), m = t.length();
    rep(i,0,n) dp[i+1][0] = i+1;
    rep(i,0,m) dp[0][i+1] = i+1;

    rep(i,0,n) rep(j,0,m) {
        int cost = (s[i] != t[j]);
        dp[i+1][j+1] = min(dp[i+1][j] + 1, 
                       min(dp[i][j+1] + 1, dp[i][j] + cost));
    }
    return dp[n][m];
}

signed main() {
    string s, t; cin >> s >> t;
    cout << editDistance(s, t) << endl;
    return 0;
}