#include <iostream>
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<P,ll> PP;
ll n,m,r,a,b,c,dp[100000],INF=(1LL<<60);
vector<PP> v;
bool Bell(void){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dp[v[j].F.F]!=INF&&dp[v[j].F.S]>dp[v[j].F.F]+v[j].S){
                dp[v[j].F.S]=dp[v[j].F.F]+v[j].S;
                if(i==n-1)return false;
            }
        }
    }
    return true;
}
int main(void){
    cin>>n>>m>>r;
    for(int i=0;i<100000;i++)dp[i]=INF;
    dp[r]=0;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v.push_back({{a,b},c});
    }
    if(!Bell()){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(dp[i]==INF)cout<<"INF"<<endl;
        else cout<<dp[i]<<endl;
    }
}

