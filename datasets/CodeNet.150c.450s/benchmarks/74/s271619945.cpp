#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int const inf = 1<<29;
int main(){
    int n,m;
    cin>>n>>m;
    static int dp[51000];
    dp[0]=0;
    for(int i=0;i<n;i++)dp[i+1]=inf;
    for(int i=0;i<m;i++){
        int d;cin>>d;
        for(int j=d;j<=n;j++){
            dp[j]=min(dp[j],dp[j-d]+1);
        }
    }
    cout<<dp[n]<<endl;
}