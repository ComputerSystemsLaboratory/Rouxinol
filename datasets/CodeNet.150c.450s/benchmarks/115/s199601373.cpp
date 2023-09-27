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
    int q;
    cin >> q;
    rep(i,q) {
        string x,y;
        cin >> x >> y;
        int dp[1050][1050] = {};
        rep(i,(int)x.length()) {
            rep(j,(int)y.length()) {
                if(i == 0 && j == 0) {
                    if(x[i] == y[j]) {
                        dp[i][j] = 1;
                    } 
                } else if(i == 0) {
                    if(x[i] == y[j]) {
                        dp[i][j] = 1;
                    } else { 
                        dp[i][j] = dp[i][j-1];
                    }
                } else if(j == 0) {
                    if(x[i] == y[j]) {
                        dp[i][j] = 1;
                    } else { 
                        dp[i][j] = dp[i-1][j];
                    }
                } else if(x[i] == y[j]) {
                    dp[i][j] = dp[i-1][j-1] +1;
                } else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cout << dp[x.length()-1][y.length()-1] << endl;
    }
	return 0;
}