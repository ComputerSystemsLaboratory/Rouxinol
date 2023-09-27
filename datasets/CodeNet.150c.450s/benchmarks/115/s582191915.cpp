#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int dp[1005][1005];

int main() {
    int n; cin >> n;
    REP(k, n){
        REP(i, 1005) REP(j, 1005) dp[i][j] = 0;
        string a, b;
        cin >> a >> b;
        REP(i, a.length()){
            string q = a.substr(i, 1);
            REP(j, b.length()){
                string t = b.substr(j, 1);
                if(q == t){
                    if(i == 0 || j == 0)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? max(dp[i-1][j-1] + 1, dp[i-1][j]) : max(dp[i-1][j-1] + 1, dp[i][j-1]);
                }
                else if (i != 0 && j != 0)
                    dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
                else if (i != 0)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i][j-1];
            }
        }
        cout << dp[a.length()-1][b.length()-1] << endl;
    }
    return 0;
}