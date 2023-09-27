#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
#define PI       3.1415926535897932384626433832795028841971
#define INF      1000000000.0
#define EPS      1e-10
#define MOD      1000000007
using namespace std;
typedef long long ll;
typedef pair<double,double> P;
typedef pair<double,P> PQ;

string s1, s2;
int dp[1001][1001];

int main(){
    cin >> s1 >> s2;
    rep(i,s1.size()+1) rep(j,s2.size()+1) dp[i][j] = MOD;
    dp[0][0] = 0;
    for(int i = 1; i <= s1.size(); i++) dp[i][0] = i;
    for(int j = 1; j <= s2.size(); j++) dp[0][j] = j;
    for(int i = 1; i <= s1.size(); i++){
        for(int j = 1; j <= s2.size(); j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = min(dp[i][j],dp[i-1][j-1]);
            dp[i][j] = min(dp[i][j],dp[i-1][j-1]+1);
            dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
            dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
        }
    }
    cout << dp[s1.size()][s2.size()] << endl;
}