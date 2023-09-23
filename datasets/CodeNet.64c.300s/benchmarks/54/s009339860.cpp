#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

typedef long long ll;

using namespace std;

int main(){
    ll dp[100][21]={0};
    int n,in[100];
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&in[i]);
    
    dp[0][in[0]]=1;
    
    for(int i=1;i<n-1;i++){
        for(int j=0;j<=20;j++){
            if(0<=in[i]+j && in[i]+j<=20)
                dp[i][in[i]+j]+=dp[i-1][j];
            if(0<=j-in[i] && j-in[i]<=20)
                dp[i][j-in[i]]+=dp[i-1][j];
        }
    }
    
    printf("%lld\n",dp[n-2][in[n-1]]);
    
    return 0;
}