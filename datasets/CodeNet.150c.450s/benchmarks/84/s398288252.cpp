#include "bits/stdc++.h"
#include "math.h"
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vin;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define drep(i,a,b) for(ll i=(a);i>=(b);--i)
#define SIZE(a) ll((a).size())
#define out(a) cout<<(a)<<endl;
const int inf=INT_MAX;
const int MAX = 510000;
const ll MOD = 1000000007;
//転倒数、バブルソート
template <typename T>
struct BIT{
  private:
    vector<T> array;
    const ll n;
  public:
    BIT(ll _n):array(_n+1,0),n(_n){}
    
    T sum(ll i){
      T s=0;
      while(i>0){
        s+=array[i];
        i-=i&(-i);
      }
      return s;
    }
    T sum(ll i,ll j){
      T ret_i=sum(i-1),ret_j=sum(j);
      return ret_j-ret_i;
    }
    void add(ll i,T x){
      while(i<=n){
        array[i]+=x;
        i+=i&(-i);
      }
    }
};
//転倒数
int main(){
  ll n,ans=0;cin>>n;
  vp a(n);vll c(n);
  rep(i,0,n){
    cin>>a[i].first;
    a[i].second=i;
  }
  sort(a.begin(),a.end());
  rep(i,0,n){
    c[a[i].second]=i+1;
  }

  BIT<ll> bit(n);
  rep(i,0,n){
    
    ans+=i-bit.sum(c[i]);
    bit.add(c[i],1);
  }
  cout<<ans<<endl;
  

}


