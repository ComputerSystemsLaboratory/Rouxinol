#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#define LL long long
using namespace std;
int dp[55][5];
int dfs(int n, int m){
    int&r = dp[n][m];
    if(r!=-1)return r;
    if(m==0){
        return r=n==0;
    }
    r=0;
    for(int i=0;i<=9;i++){
        if(n>=i){
            r+=dfs(n-i,m-1);
        }
    }
    return r;
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    while(cin>>n){
        cout<<dfs(n,4)<<endl;
    }
    return 0;
}

