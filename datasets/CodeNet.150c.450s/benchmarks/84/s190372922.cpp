#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[600000],n,a,cnt;
long long ans;
map<int,int> mp;
vector<int> v;
void BITadd(int a,int b){
    while(a>0){
        dp[a]+=b;
        a-=a&(-a);
    }
    return ;
}
int BITsum(int a){
    int tot=0;
    while(a<600000){
        tot+=dp[a];
        a+=a&(-a);
    }
    return tot;
}
int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        mp[a]=1;
    }
    for(auto x:mp){
        mp[x.first]+=cnt++;
    }
    for(int i=0;i<n;i++){
        a=mp[v[i]];
        ans+=BITsum(a);
        BITadd(a,1);
    }
    cout<<ans<<endl;
}

