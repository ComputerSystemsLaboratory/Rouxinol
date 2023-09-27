#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a7=1000000007;
ll inf=1000000000000000;
typedef pair<ll,ll> l_l;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back


ll min(ll a,ll b){
    if(a<b)return a;
    return b;
}
ll max(ll a,ll b){
    if(a>b)return a;
    return b;
}

ll Max(ll a,ll b,ll c){
    if(a<0){
        a=-inf;
    }
    if(b<0){
        b=-inf;
    }
    if(c<0){
        c=-inf;
    }
    ll ans=max(max(a,b),c);
    if(ans<0) return -2;
    return ans;
}

int main(){
    string s,t;cin>>s>>t;
    int dp[s.size()+1][t.size()+1];
    rep(i,0,s.size()){
        dp[i][0]=i;
    }
    rep(i,0,t.size()){
        dp[0][i]=i;
    }
    rep(i,0,s.size()-1){
        rep(j,0,t.size()-1){
            if(s[i]==t[j]){
                dp[i+1][j+1]=dp[i][j];
            }else{
                dp[i+1][j+1]=min(min(dp[i][j+1],dp[i+1][j]),dp[i][j])+1;
            }
            //cout<<dp[i+1][j+1]<<' ';
        }
        //cout<<endl;
    }
    cout<<dp[s.size()][t.size()]<<endl;
    
    return 0;
}


