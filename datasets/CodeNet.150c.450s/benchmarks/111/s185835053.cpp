#include <bits/stdc++.h>
using namespace std;

long long int dp[101][21];

int main() {

    int n;

    cin >> n;

    short a[n];

    for(int i=0;i<n-1;i++){
        cin >> a[i];
    }

    for(int i=0;i<101;i++){
        for(int j=0;j<21;j++){
            dp[i][j] = 0;
        }
    }

    /*for(int j=0;j<21;j++){
        if(j>=a[0]){
            dp[1][j] += dp[0][j-a[0]] + 1;
        }
    }*/

    dp[1][a[0]] = 1;

    for(int i=1;i<n-1;i++){
        for(int j=0;j<21;j++){
            if(j>=a[i]&&dp[i][j-a[i]] != 0){
                dp[i+1][j] += dp[i][j-a[i]];
            }
            if(a[i]+j<21 && dp[i][a[i]+j]!=0){
                dp[i+1][j] += dp[i][a[i]+j];
            }
        }
    }

    /*for(int i=0;i<=n-1;i++){
        for(int j=0;j<21;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/

    int ans;

    cin >> ans;

    cout << dp[n-1][ans] << endl;

    return 0;
}