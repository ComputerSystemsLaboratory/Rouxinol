#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
using namespace std;

typedef long long ll;
#define rep(i, a, b) for (ll i=(a); i<(b); i++)
#define all(obj) (obj).begin(), (obj).end()
#define fi first
#define sc second
#define pb push_back
#define str to_string
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
void chmax(ll &a, ll b) { a = max(a, b); }
void chmin(ll &a, ll b) { a = min(a, b); }

ll dp[1010][1010];

ll LCS(string a, string b) {
    int N = a.size();
    int M = b.size();
    memset(dp, 0, sizeof(dp));

    rep(i, 0, N+1) rep(j, 0, M+1) {
        if (i < N) {
            chmax(dp[i+1][j], dp[i][j]);
        }
        if (j < M) {
            chmax(dp[i][j+1], dp[i][j]);
        }
        if (i < N && j < M && a[i] == b[j]) {
            chmax(dp[i+1][j+1], dp[i][j]+1);
        }
    }
    return dp[N][M];
}

int main() {
    int Q;
    string a, b;
    cin >> Q;
    rep(i, 0, Q) {
        cin >> a;
        cin >> b;
        cout << LCS(a, b) << endl;
    }
    return 0;
}

