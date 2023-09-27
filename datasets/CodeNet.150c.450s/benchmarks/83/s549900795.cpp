#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int dp[10001] = { 0 };
    int n, W;
    int v[100], w[100];
    cin >> n >> W;
    for (int i = 0; i < n; i++){
        cin >> v[i] >> w[i];
    }
    for (int i = 0; i < n; i++){
        for (int i2 = W-w[i]; i2 >= 0; i2--){
            dp[i2 + w[i]] = max(dp[i2 + w[i]], dp[i2] + v[i]);
        }
    }
    cout << dp[W] << endl;
}