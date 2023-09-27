#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)

int main(){
    int dp[50];
    rep(i,50)dp[i]=0;
    dp[0]=1;
    rep(i,35){
        for(int j=1;j<=3;j++){
            dp[i+j]+=dp[i];
        }
    }
    
    
    int n;
    while(cin>>n&&n){
        cout<<ceil(dp[n]/3650.0)<<endl;
    }
}