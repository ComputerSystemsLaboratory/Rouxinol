#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int main(){
    int n;
    ll dp[40];
    while(cin>>n){
        if(n==0)break;
        
        rep(i,40)dp[i] = 0;
        dp[0]=1;
        rep(i,35){
            dp[i+1]+=dp[i];
            dp[i+2]+=dp[i];
            dp[i+3]+=dp[i];
        }
        ll ans = dp[n];
        ans = ceil(ans/3650.0);
        cout<<ans<<endl;
    }
}