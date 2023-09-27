#include "bits/stdc++.h"
using namespace std;

#define MAX_S 1010
#define MAX_T 1010

template<typename T> int lcs(T s,T t){
    int lens=s.size();
    int lent=t.size();
    int dp[MAX_S+1][MAX_T+1]={};
    
    
    for(int i=0;i<lens;i++){
        for(int j=0;j<lent;j++){
            if(s[i]==t[j])  dp[i+1][j+1] = dp[i][j]+1;
            else            dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
        }
    }
    return dp[lens][lent];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        cout<<lcs(s,t)<<endl;
    }
}