#include <iostream>
#include <cstring>
using namespace std;

long long dp[21][101];

int main() {
    int n,i,j,k;
    cin>>n>>i;
    dp[i][0] = 1;
    for(int k=0; k<n-1; ++k) {
        cin>>i;
        if(k == n-2) {
            cout<<dp[i][k]<<endl;
            goto END;
        }
        for(int j=0; j<=20; ++j) {
            if(dp[j][k] > 0) {
                if(j-i >= 0) dp[j-i][k+1] += dp[j][k];
                if(j+i <= 20) dp[j+i][k+1] += dp[j][k];
            }
        }
    }
END:;
}