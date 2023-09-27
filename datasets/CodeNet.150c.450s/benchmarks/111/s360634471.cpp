#include <iostream>
#include <cstring>

using namespace std;


int main(){
    int n,tm;
    long long dp[101][21];
    memset(dp,0,sizeof(dp));
    cin>>n>>tm;
    dp[1][tm]=1;
    for(int i=1;i<n-1;++i){
        cin>>tm;
        for(int j=0;j<21;++j){
            if(j+tm<=20) dp[i+1][j+tm]+=dp[i][j];
            if(j-tm>=0) dp[i+1][j-tm]+=dp[i][j];
        }
    }
    cin>>tm;
    cout<<dp[n-1][tm]<<endl;
    return 0;
}