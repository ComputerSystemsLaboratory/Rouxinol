#include<iostream>
#include<vector>
#define ll long long
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,ans;
    int *a;
    ll sum=0;
    cin >> n;
    a = new int[n-1];
    vector<vector<ll>> dp(n,vector<ll>(21,0));
    rep(i,n-1){
        cin >> a[i];
    }
    cin >> ans;
    
    dp[1][a[0]]=1;

    for(int i=1;i<n-1;i++){
        rep(k,21){
            if (k+a[i] <= 20) {
                dp[i+1][k+a[i]] += dp[i][k]; 
            }
            if (k-a[i] >= 0) {
                dp[i+1][k-a[i]] += dp[i][k];
            }
        }
    }

    cout << dp[n-1][ans] << endl;
    return 0;
}