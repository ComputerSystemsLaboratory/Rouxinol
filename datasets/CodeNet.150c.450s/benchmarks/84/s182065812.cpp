#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,BIT[200001],a[200000],ans,cnt,b[200000];
map<ll,ll> mp;
void BITadd(int a){
    while(a){
        BIT[a]++;
        a-=a&(-a);
    }
    return ;
}
ll BITsum(int a){
    ll tot=0;
    while(a<=200000){
        tot+=BIT[a];
        a+=a&(-a);
    }
    return tot;
}
int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    cnt=1;
    for(int i=0;i<n;i++)mp[b[i]]=cnt++;
    for(int i=0;i<n;i++)a[i]=mp[a[i]];
    for(int i=0;i<n;i++){
        ans+=BITsum(a[i]);
        BITadd(a[i]);
    }
    cout<<ans<<endl;
}

