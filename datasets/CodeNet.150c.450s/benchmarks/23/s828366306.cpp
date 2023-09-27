#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int dp[50];
int main(){
    int n;
    cin>>n;
    dp[1]=dp[0]=1;
    FOR(i,2,n+1) dp[i]=dp[i-1]+dp[i-2];
    cout<<dp[n]<<endl;
    return 0;
}
