#include <algorithm>
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <limits>
#include <map>
#include <queue>
#include <stack>
#include <vector>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr << #x << ": " << x << endl
#define debug2(x,y) cerr << #x << ": " << x << ", " << #y << ": " << y << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
template<class T> using vv=vector<vector<T>>;
typedef deque<int> di;
typedef deque<deque<int>> ddi;
int INF = 100000;


int main() {
    int n,m;
    int c[21] = {};
    int dp[50001][21] = {};
    cin >> n >> m;
    rep(i,m) {
        cin >> c[i+1];
    }
    rep(i,n) {
        rep(j,m+1) {
            dp[i+1][j] = INF;
        }
    }
    FOR(i,1,n+1){
        FOR(j,1,m+1) {
                dp[i][j] = (i-c[j] >= 0) ? min(dp[i-c[j]][j]+1, dp[i][j-1]): dp[i][j-1];
        }
    }

    cout << dp[n][m] << endl;
	return 0;
}