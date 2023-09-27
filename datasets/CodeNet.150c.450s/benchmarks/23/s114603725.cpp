#include <bits/stdc++.h>
using namespace std;
#define MAX_N 10000
int dp[MAX_N];
int fib(int n){
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans<<endl;
    return 0;
}