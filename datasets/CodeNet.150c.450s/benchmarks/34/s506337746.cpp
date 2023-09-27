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
    while(1) {
        int n;
        cin >> n;
        if(n==0) {
            break;
        }
        int dp[30];
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 4;
        FOR(i,3,n) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        if(dp[n-1] % 3650 == 0) { 
            cout << dp[n-1] /3650 << endl;
        } else {
            cout << dp[n-1] /3650 + 1 << endl;
        }
         
    }
	return 0;
}