#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)

int n,s;
int ans;

void dfs(int sum,int flor,int last){
    if(sum>s)return ;
    
    if(flor==n){
        if(sum==s)ans++;
        return ;
    }
    rep(i,10){
        if(i<=last)continue;
        dfs(sum+i,flor+1,i);
    }
}


int main(){
    while(cin>>n>>s&&(n||s)){
        ans = 0;
        dfs(0,0,-1);
        cout<<ans<<endl;
    }
}