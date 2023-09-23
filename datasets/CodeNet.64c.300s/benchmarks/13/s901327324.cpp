#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
const long long INF=1LL<<60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

int main(){
int n; cin>>n;
int dp[45];
dp[0]=1; dp[1]=1;
for(int i=2;i<=45;i++){
    dp[i]=dp[i-2]+dp[i-1];
}
cout<<dp[n]<<endl;
}
