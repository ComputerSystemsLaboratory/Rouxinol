#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr<<#x<<": "<<x<<'\n'

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const ll inf = 99900100100;
const int MOD = 998244353;
const double EPS = 1e-9;

int dp[1100][1100] = {};
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    string s1,s2;
    cin >> s1;
    cin >> s2;
    rep(i,s1.size()+1) dp[i][0] = i;
    rep(j,s2.size()+1) dp[0][j] = j;

    REP(i,1,s1.size()+1){
      REP(j,1,s2.size()+1){
        int u = (s1[i-1]==s2[j-1])?0:1;
        dp[i][j] = min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+u});
      }
    }
    cout << dp[s1.size()][s2.size()] << endl;
    return 0;
}

