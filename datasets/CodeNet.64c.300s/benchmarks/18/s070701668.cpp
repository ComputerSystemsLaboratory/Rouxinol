#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <string>
#include <complex>
#include <functional>
using namespace std;
typedef pair<int,int> P;

int main(){
    int dp[31];
    int i,n;
    dp[0]=1,dp[1]=1,dp[2]=2;
    for(i=3;i<=30;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    while(cin>>n&&n){
        int ans=(dp[n]-1)/(365*10)+1;
        cout<<ans<<endl;
    }
    return 0;
}
