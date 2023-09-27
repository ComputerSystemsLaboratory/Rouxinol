#include <iostream>
using namespace std;
const int inf=1001000000;
int n;
int a[100100];
int dp[100100];
// dp[i]=????????¨???????????????i?????????????°????//
int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=inf;
    }
    for(int i=0;i<n;i++){
        auto it=lower_bound(dp,dp+n,a[i]);
        *it=a[i];
    }
    int ans=lower_bound(dp,dp+n,inf)-dp;
    cout<<ans<<endl;
    return 0;
}