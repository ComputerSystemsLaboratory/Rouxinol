#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstdlib>
#include <cmath>
#include<stdio.h>
#include<queue>
#include<stack>
#include<set>
#define MAX 1000000000000000000LL
long long inf=1000000007;
using namespace std;
int main(){
    int n; cin>>n;
    int num[101];
    long long dp[101][21]={};
    for(int i=1; i<=n; i++){
        cin>>num[i];
    }
    dp[1][num[1]]=1;
    
    for(int i=2; i<n; i++){
        for(int j=0; j<=20; j++){
            if(num[i]<=j)dp[i][j]+=dp[i-1][j-num[i]];
            if(num[i]+j<=20)dp[i][j]+=dp[i-1][j+num[i]];
        }
    }
    
    cout<<dp[n-1][num[n]]<<endl;
    return 0;
}