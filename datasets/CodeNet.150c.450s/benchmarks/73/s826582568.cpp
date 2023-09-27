#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define PB push_back
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);
typedef pair<ll,ll> pii;

struct RSQ{
  ll size;
  ll *tree;
  RSQ(ll sz){
    ll logsize; for(logsize=0;(1ll<<logsize)<=sz;logsize++);
    size=(1ll<<logsize);
    tree=new ll[size*2-1];
    REP(i,size*2-1) tree[i]=0;
  }
  void add(ll i,ll x){
    ll k=i+size-1;
    tree[k]+=x;
    while(k>0){
      k=(k-1)/2;
      tree[k]+=x;
    }
  }
  ll getSum(ll s,ll t,ll l,ll r,ll k){
    if(t<=l||r<=s||l>=r) return 0;
    if(l+1==r) return tree[k];
    if(s<=l&&r<=t) return tree[k];
    ll mid=(l+r+1)/2;
    return getSum(s,t,l,mid,k*2+1)+getSum(s,t,mid,r,k*2+2);
  }
  ll getSum(ll s,ll t){
    return getSum(s,t,0,size,0);
  }
};

int main(){
  ll n,q; cin>>n>>q;
  RSQ rsq(n);
  REP(i,q){
    ll com,x,y; cin>>com>>x>>y;
    if(com==0) rsq.add(x,y);
    else cout<<rsq.getSum(x,y+1)<<endl;
  }
}