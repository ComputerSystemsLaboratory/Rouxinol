#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for(int i = 0 ; i < (int)n ; i++)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
using namespace std;
int dp[1001][1001];
int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    rep(i, s1.length()+1) dp[i][0] = i;
    rep(j, s2.length()+1) dp[0][j] = j;
    REP(i, 1,  s1.length()+1){
        REP(j, 1, s2.length()+1){
            int cost = s1[i-1] == s2[j-1]?0:1;
            dp[i][j] = min(min(dp[i-1][j]+1, dp[i][j-1]+1), dp[i-1][j-1]+cost);
        }
    }
    cout << dp[s1.length()][s2.length()] << endl;
}
