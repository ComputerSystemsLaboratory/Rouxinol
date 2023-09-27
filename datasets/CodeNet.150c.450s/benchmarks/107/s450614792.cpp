#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
#define rep(i, s, n) for(int i = s; i < n; i++) 

int main() {
    string s, t;
    cin >> s >> t;

    int dp[s.size()+1][t.size()+1];
    rep(i, 0, s.size()+1) {
        dp[i][0] = i;
    }
    rep(i, 0, t.size()+1) {
        dp[0][i] = i;
    }
    rep(i, 1, s.size()+1) {
        rep(j, 1, t.size()+1) {
            int cost = 0;
            if(s[i-1] == t[j-1]) cost = 0;
            else cost = 1;
            dp[i][j] = min(dp[i-1][j]+1, min(dp[i][j-1]+1, dp[i-1][j-1]+cost));
        }
    }
    cout << dp[s.size()][t.size()] << endl;
    return 0;
    
}
