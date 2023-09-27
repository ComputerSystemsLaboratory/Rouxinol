#include<bits/stdc++.h>
using namespace std;

const int N_MAX=31;
int dp[N_MAX];

int rec(int n){
    int res;
    if(n<0)return 0;
    if(n==0)return 1;
    if(dp[n]>=0){
        return dp[n];
    }else{
        res=rec(n-1)+rec(n-2)+rec(n-3);
    }
    return dp[n]=res;
}

int main(){
    int n;
    while(cin>>n){
        memset(dp,-1,sizeof(dp));
        if(n==0)break;
        cout<<ceil(rec(n)/3650.0)<<endl;
    }
}