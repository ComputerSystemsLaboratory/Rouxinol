#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
 
/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
*/

int lcm(string s, string t, vector<vector<int>> dp){
    int m = s.size();
    int n = t.size();
    int maxl = 0;
    s = " " + s;
    t = " " + t;
    for(int i=0; i<=m; i++) dp[i][0] = 0;
    for(int j=0; j<=n; j++) dp[0][j] = 0;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s[i] == t[j]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            maxl = max(maxl, dp[i][j]);
        }
    }

    return maxl;
}

int main(){
    vector<vector<int>> dp(1001, vector<int>(1001, 0));

    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s, t; cin >> s >> t;
        cout << lcm(s, t, dp) << endl;
    }
}
