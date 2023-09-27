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


int main() {
    int n,w;
    cin >> n >> w;
    i_i vw[101] = {};
    int dp[10001][101] = {};
    FOR(i,1,n+1) {
        cin >> vw[i].first >> vw[i].second;
    }
    FOR(i,1,w+1) {
        FOR(j,1,n+1) {
            if(i >= vw[j].second) {
                dp[i][j] = max((vw[j].first + dp[i-vw[j].second][j-1]),dp[i][j-1]);
            } else {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    cout <<  dp[w][n] << endl;
	return 0;
}