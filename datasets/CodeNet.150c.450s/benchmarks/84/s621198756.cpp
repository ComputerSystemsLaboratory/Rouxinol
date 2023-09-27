#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
#include<set>
#include<map>
#include<bitset>

using namespace std;
typedef long long ll;
#define i_7 (ll)(1E9+7)
#define i_5 (ll)(1E9+5)
ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    else return c+i_7;
}
typedef pair<int,int> i_i;
typedef pair<ll,ll> l_l;
ll inf=(ll)1E12;/*10^12*/
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}

/////////////////////////////////////////////////////
//[1,n]
#define max_n 300000//調節！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
int bit[max_n+1],n;
int sum(int i){//a[1]~a[i]の和を求める
    int s=0;
    while(i>0){
        s+=bit[i];
        i-=i&-i;
    }
    return s;
}
void add(int i,int x){//a[i]にxを加える
    while(i<=n){
        bit[i]+=x;
        i+=i&-i;
    }
}
////////////////////////////////////////
int main(){
    cin>>n;
    int a[n];rep(i,0,n-1)cin>>a[i];
    vector<int>v;rep(i,0,n-1)v.pb(a[i]);
    sort(v.begin(),v.end());
   // v.erase(unique(v.begin(),v.end()),v.end());
    rep(i,0,n-1){
        a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin()+1;
    }
   // rep(i,0,n-1)cout<<a[i]<<" ";
    ll ans=0;
    rep(i,0,n-1){
        ans+=i-sum(a[i]);
        add(a[i],1);
    }
    cout<<ans<<endl;
    
    
    return 0;
}
