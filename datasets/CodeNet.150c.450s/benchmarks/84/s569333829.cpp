#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;
  
struct BIT{
    int size;
    vector<ll> dat;
    void init(int n){
        size=n;
        dat.clear();
        dat.resize(n+1);
    }
    void add(int i,ll x){
        while(i<=size){
        dat[i]+=x;
        i +=i&-i;
        }
    }
    ll sum(int i){
        ll s=0;
        while(0<i){
            s +=dat[i];
            i -=i&-i;
        }
    return s;
    }
};
int a[200001],a2[200001];
int main(){
    int n,ai;
    cin>>n;
    BIT b;
    b.init(n+1);
    ll cnt=0;
    rep(i,n){
        cin>>ai;
        a[i]=a2[i]=ai;
    }
    sort(a2,a2+n);
    rep(i,n){
        a[i]=lower_bound(a2,a2+n,a[i])-a2+1;
    }
    rep(i,n){
        cnt+=i-b.sum(a[i]);
        b.add(a[i],1);
    }
    cout<<cnt<<endl;
    return 0;
}
