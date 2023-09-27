#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF=(1<<21);


int main(void){
    int n,m; cin >> n >> m;
    int c[m+1], dp[m+1][n+1];

    c[0]=0;
    for(int i=1; i<=m; i++) cin >> c[i];

    for(int i=0; i<=m; i++) dp[i][0]=0;
    for(int j=0; j<=n; j++) dp[0][j]=INF;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(j>=c[i]) dp[i][j]=min(dp[i-1][j], dp[i][j-c[i]]+1);
            else dp[i][j]=dp[i-1][j];
        }
    }

    cout << dp[m][n] << endl;

}
