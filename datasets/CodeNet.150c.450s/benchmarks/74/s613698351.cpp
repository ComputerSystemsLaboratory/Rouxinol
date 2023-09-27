#include<bits/stdc++.h>
using namespace std;
int m;
int arr[1<<20];
int memo[1<<20];
int solve(int n){
    if(memo[n]!=-1)return memo[n];
    if(n==0)return 0;
    int ans=INT_MAX;
    for(int i=1;i<=m;++i){
       if(n-arr[i]>=0) ans=min(ans,1+solve(n-arr[i]));
    }
    return memo[n]=ans;
}
int main(){
    int n;cin>>n>>m;
    for(int i=1;i<=m;++i)
        cin>>arr[i];
    memset(memo,-1,sizeof memo);
    cout<<solve(n)<<endl;
    return 0;
}