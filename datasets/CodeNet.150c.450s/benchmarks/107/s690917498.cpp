#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi=3.141592653589793;
typedef unsigned long long ull;
typedef long double ldouble;
const ll INF=1e18;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    string a, b;
    cin >> a >> b;
    int la = a.length(), lb = b.length();
    vector<vector<int> > dp(la+1, vector<int>(lb+1, 0));
    rep2(i, 1, la+1) dp[i][0] = i;
    rep2(j, 1, lb+1) dp[0][j] = j;
    rep2(i,1, la+1){
        rep2(j,1, lb+1){
            if((char)a.at(i-1) == (char)b.at(j-1)) {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j] + 1, dp[i][j-1] + 1));
            }
            else dp[i][j] = min(dp[i-1][j-1]+1, min(dp[i-1][j] + 1, dp[i][j-1] + 1));
        }
    }
    cout << dp[la][lb] << endl;
}
