#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    long long dp[105][21];
    int n,begin,ans,k;
    cin>>n;
    cin>>begin;
    memset(dp, 0, sizeof(dp));
    dp[0][begin]=1;
    for(int i=1; i<n-1; i++){
        cin>>k;
        for(int j=0; j<21; j++){
            if(j+k<=20) dp[i][j+k]+=dp[i-1][j];
            if(j-k>=0) dp[i][j-k]+=dp[i-1][j];
        }
    }
    cin>>ans;
    cout<<dp[n-2][ans]<<endl;
    return 0;
}