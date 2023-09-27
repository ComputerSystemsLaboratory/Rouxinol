#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)


int main(){
    int n;
    cin>>n;
    rep(i,n){
        string s,t;
        cin>>s>>t;
        
        
        int dp[1001][1001]={};
        
        rep(i,s.size()){
            rep(j,t.size()){
                if(s[i]==t[j])dp[i+1][j+1] = dp[i][j]+1;
                else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
            }
        }
        
        cout<<dp[s.size()][t.size()]<<endl;
    }
}