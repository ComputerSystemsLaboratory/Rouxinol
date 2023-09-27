#include<bits/stdc++.h>
#define int long long
#define INF 1<<25
using namespace std;

int N,W;
int ans;
int v[1010],w[1010];
int mem[10100][10100];

int dfs(int n,int h){
    if(n==0){
        ans=0;
    }
    else if(mem[n][h]!=0)ans=mem[n][h];
    else if(w[n]>h)ans=dfs(n-1,h);
    else {
        ans=max(dfs(n-1,h),dfs(n-1,h-w[n])+v[n]);
    }
    return mem[n][h]=ans;
}

signed main(){
    cin>>N>>W;
    for(int i=1;i<=N;i++){
        cin>>v[i]>>w[i];
    }
    cout<<dfs(N,W)<<endl;
}