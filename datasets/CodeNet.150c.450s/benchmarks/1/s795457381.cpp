#include <iostream>
using namespace std;
int n;
long long int a[100001];
long long int dp[100001];
int main(void){
    // Your code here!
    int i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
        dp[i] = 1000010000;
    }
    for(i=0;i<n;i++){
        auto it = lower_bound(dp,dp+n,a[i]);
        *it = a[i];
    }
    /*for(i=0;i<n;i++){
        cout << dp[i];
    }*/
    int ans = lower_bound(dp,dp+n,1000010000) - dp;
    cout << ans << endl;
    return 0;
}