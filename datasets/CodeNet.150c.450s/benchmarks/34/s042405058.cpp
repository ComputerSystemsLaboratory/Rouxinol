#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
using namespace std;


int main(){
    int dp[100]={};
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=30;i++){
        dp[i]+=dp[i-1]+dp[i-2]+dp[i-3];
    }
    while(1){
        int n;
        cin>>n;
        if(n==0){break;}
        int ans=(dp[n]+3649)/3650;
        cout<<ans<<endl;
    }
    
    
    return 0;
}

