#include <iostream>
using namespace std;
int main(void){
    int n;
    int dp[31];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    
    for(int i=3; i<=30; i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    while(cin>>n&&n){
        cout<<dp[n]/3650+(dp[n]%3650!=0)<<endl;
    }
    return 0;
}

