#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    fill(dp,dp+n+1,1e9);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        *lower_bound(dp,dp+n+1,a)=a;
    }
    cout<<lower_bound(dp,dp+n+1,1e9)-dp<<endl;
}