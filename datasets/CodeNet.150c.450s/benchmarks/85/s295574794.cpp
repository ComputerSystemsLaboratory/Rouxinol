#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0;}

int INF = 1001001001;
int main() {
    int n;
    int p[110];
    int dp[110][110];
    cin >> n;
    for(int i = 1;i<=n;i++) cin >> p[i-1] >> p[i];
    for(int i = 0;i<=n;i++) dp[i][i] = 0;
    for(int l = 2;l<=n;l++) {
        for(int i = 1;i <= n-l+1;i++) {
            int j = i+l-1;
            dp[i][j] = INF;
            for(int k = i;k<j;k++) {
                chmin(dp[i][j],dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout << dp[1][n] << endl;
}
