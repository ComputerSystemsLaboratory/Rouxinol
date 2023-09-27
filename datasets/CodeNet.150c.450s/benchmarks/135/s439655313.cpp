#include <bits/stdc++.h>
using namespace std ;

#define pb(n) push_back(n)
#define fi first
#define se second
#define all(r) begin(r),end(r)
#define vmax(ary) *max_element(all(ary))
#define vmin(ary) *min_element(all(ary))
#define debug(x) cout<<#x<<": "<<x<<endl
#define fcout(n) cout<<fixed<<setprecision((n))
#define scout(n) cout<<setw(n)
#define vary(type,name,size,init) vector< type> name(size,init)
#define vvl(v,w,h,init) vector<vector<ll>> v(w,vector<ll>(h,init))
#define mp(a,b) make_pair(a,b)

#define rep(i,n) for(int i = 0; i < (int)(n);++i)
#define REP(i,a,b) for(int i = (a);i < (int)(b);++i)
#define repi(it,array) for(auto it = array.begin(),end = array.end(); it != end;++it)
#define repa(n,array) for(auto &n :(array))

using ll = long long;
using pii = pair<int,int> ;
using pll = pair<ll,ll> ;

template<typename T>
void O(T t){
  cout << t << endl;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  double d = 1000 * 1510;
  ll n,m,k;
  double w,b;
  while(cin >> n >> m,n +m){
    vector<ll> x(n+1),y(m+1);
    k = 0;
    rep(i,n){
      cin >> w;
      k += w;
      x[i+1] = k;
    }
    k = 0;
    rep(i,m){
      cin >> w;
      k += w;
      y[i+1] = k;
    }
    map<int,int> ans;
    rep(i,n+1){
      rep(j,m+1){
        ans[int(y[j]-x[i])]++;
      }
    }
    ll cnt = 0;
    for(auto p:ans){
      int o = p.se;
      cnt += o * (o-1)/2;
    }
    cout << cnt << endl;
  }
  return 0;
}