#include <bits/stdc++.h>
using namespace std;
#define repr(i, a, b) for (int i = a; i < b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
#define mod 1000000007

ll gcd(ll x,ll y) {return y ? gcd(y,x%y) : x;} 
ll lcm(ll x,ll y) {return x/gcd(x,y)*y;}

ll dp[1005][1005];

int main(){
    string s,ss;
    cin >> s >> ss;
    ll n,nn;
    n=s.size();
    nn=ss.size();
    
    rep(i,n+1) dp[i][0]=i;
    rep(i,nn+1) dp[0][i]=i;
    
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=nn;j++){
            if(s[i-1]==ss[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=min({dp[i][j-1]+1,dp[i-1][j]+1,dp[i-1][j-1]+1});
            }
        }
    }
    
    cout << dp[n][nn] << endl;

    return 0;
}










