#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   int r[n+1],c[n+1];
   for (int i=1; i<n+1; i++) {
       cin >> r[i] >> c[i];
   }
   int dp[n+1][n+1];
   memset(dp,0,sizeof(dp));
   for (int i=1; i<=n; i++) {
       for (int j=1; j<=i; j++) {
           if (j==1) {
               continue;
           }
           if (j==2) {
               dp[i][j]=r[i-1]*r[i]*c[i];continue;
           }
           int m;
           for (int k=1; k<j; k++) {
               if (k==1) {
                   m=dp[i][j-1]+r[i-j+1]*c[i-j+1]*c[i];
               }
               else m=min(m,dp[i-j+k][k]+dp[i][j-k]+r[i-j+1]*c[i-j+k]*c[i]);
           }
           dp[i][j]=m;
       }
   }
   cout << dp[n][n] << endl;
}
