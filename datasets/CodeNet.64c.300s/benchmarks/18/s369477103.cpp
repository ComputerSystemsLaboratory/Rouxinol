#include <iostream>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        int dp[35]={0};
        dp[0]=1;
        rep(i,n){
            dp[i+1] += dp[i];
            dp[i+2] += dp[i];
            dp[i+3] += dp[i];
        }

        cout << dp[n]/(365*10)+1 << endl;
    }
    return 0;
}