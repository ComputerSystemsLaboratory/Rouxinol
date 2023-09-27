#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;


//????????±?????¨??????
const int MAX_N = 1000;
int dp[MAX_N + 1][MAX_N + 1];

int solve(string s, string t, int n, int m){
    rep(i,n){
        rep(j,m){
            if(s[i] == t[j]){
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }else{
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }
    return dp[n][m];
}

int main(){
    int n;
    string s, t;
    cin >> n;
    rep(i,n){
        cin >> s >> t;
        cout << solve(s, t, s.size(), t.size()) << endl;
    }
}