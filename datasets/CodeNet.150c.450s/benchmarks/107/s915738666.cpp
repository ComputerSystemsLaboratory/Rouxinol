#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define REP(i, x, n) for(int i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    int dp[1010][1010]; //dp[i][j] s1のi文字目までとs2のj文字目までの編集距離
    rep(i, n+1){
        dp[i][0] = i;
    }
    rep(j, m+1){
        dp[0][j] = j;
    }
    REP(i, 1, n+1){
        REP(j, 1, m+1){
            dp[i][j] = min({dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + (s1[i-1] != s2[j-1])});
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
