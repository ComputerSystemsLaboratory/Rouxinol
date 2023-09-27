#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

#define rep(index,max) for(int index=0;index<max;index++)

using namespace std;

int main(){
    string s1,s2;
    int l1,l2;
    cin>>s1>>s2;
    l1=s1.length();
    l2=s2.length();
    int dp[1010][1010];
    
    rep(i,l1+1) dp[i][0]=i;
    rep(j,l2+1) dp[0][j]=j;
    
    rep(i,l1){
        rep(j,l2){
            if(s1[i]==s2[j]){
                dp[i+1][j+1]=dp[i][j];
            }
            else{
                dp[i+1][j+1]=min(min(dp[i+1][j],dp[i][j+1]),dp[i][j])+1;
            }
        }
    }
    
    cout<<dp[l1][l2]<<endl;
    return 0;
}