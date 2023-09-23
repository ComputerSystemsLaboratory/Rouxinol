#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int dp[31]={};
    dp[0]=1;dp[1]=1;dp[2]=2;
    for(int i=3;i<31;i++){
        for(int j=1;j<4;j++){
            dp[i]+=dp[i-j];
        }
    }
    while(cin>>n,n){
        int num=dp[n]/3650;
        if(dp[n]%3650!=0)num++;
        cout<<num<<endl;
    }
}