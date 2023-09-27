#include <iostream>
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<ll,P> PP;
ll n,m,a,b,c,ans,fa[10000],ra[10000];
vector<PP> v;
ll find(ll x){
    if(x==fa[x])return x;
    return fa[x]=find(fa[x]);
}
int uni(ll x,ll y){
    x=find(x),y=find(y);
    if(x==y)return 0;
    if(ra[x]<ra[y])swap(x,y);
    fa[y]=x;
    if(ra[x]==ra[y])ra[x]++;
    return 1;
}
int main(void){
    cin>>n>>m;
    for(int i=0;i<n;i++)fa[i]=i;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        v.push_back({c,{a,b}});
    }
    sort(v.begin(),v.end());
    for(PP x:v){
        if(find(x.S.F)!=find(x.S.S)){
            ans+=x.F;
            uni(x.S.F,x.S.S);
        }
    }
    cout<<ans<<endl;
}

