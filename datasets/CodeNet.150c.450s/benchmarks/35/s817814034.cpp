#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<int,int> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    int n;
    while(cin>>n,n){
        ll a[5010];
        ll dp[5010];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=-LINF;
        for(int j=0;j<n;j++){
            if(dp[j]<0){
                dp[j+1]=a[j];
            }else{
                dp[j+1]=dp[j]+a[j];
            }
            ans=max(dp[j+1],ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}


