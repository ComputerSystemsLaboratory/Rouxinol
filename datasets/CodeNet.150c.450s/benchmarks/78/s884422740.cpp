#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999


int main(){
    vector<int> val,odd;
    for(int i=1;i*(i+1)*(i+2)<=6000000;i++){
        int x = (i*(i+1)*(i+2))/6;
        val.pb(x);
        if(x%2==1)odd.pb(x);
    }
    
    int dp[1000001],dp_odd[1000001];
    rep(i,1000001)dp[i] = INF,dp_odd[i]=INF;
    dp[0] = 0,dp_odd[0] = 0;
//    cout<<val.size()<<" "<<odd.size()<<endl;
    for(int i=1;i<=1000000;i++){
        for(int j=0;j<val.size();j++){
            if(i-val[j]>=0) dp[i] = min(dp[i] , dp[i-val[j]]+1);
        }
        for(int j=0;j<odd.size();j++){
            if(i-odd[j]>=0) dp_odd[i] = min(dp_odd[i] , dp_odd[i-odd[j]]+1);
        }
    }
    
    int n;
    while(cin>>n&&n){
        cout<<dp[n]<<" "<<dp_odd[n]<<endl;
    }

}