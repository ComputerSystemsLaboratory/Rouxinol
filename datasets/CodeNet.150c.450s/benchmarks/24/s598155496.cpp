#include<bits/stdc++.h>
#define rep(i,a,...) for(int i = (a)*(strlen(#__VA_ARGS__)!=0);i<(int)(strlen(#__VA_ARGS__)?__VA_ARGS__:(a));++i)
#define per(i,a,...) for(int i = (strlen(#__VA_ARGS__)?__VA_ARGS__:(a))-1;i>=(int)(strlen(#__VA_ARGS__)?(a):0);--i)
#define foreach(i, n) for(auto &i:(n))
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define bit(x) (1ll << (x))
#define method(name,res,...) function<res (__VA_ARGS__) > name = [&](__VA_ARGS__) -> res
using ll = long long;
//const ll MOD = (ll)1e9+7;
const ll MOD = 998244353;
const int INF = (ll)1e9+7;
const ll INFLL = (ll)1e18;
using namespace std;
template<class t>
using vvector = vector<vector<t>>;
template<class t>
using vvvector = vector<vector<vector<t>>>;
template<class t>
using priority_queuer = priority_queue<t, vector<t>, greater<t>>;
template<class t, class u> bool chmax(t &a, u b){if(a<b){a=b;return true;}return false;}
template<class t, class u> bool chmin(t &a, u b){if(a>b){a=b;return true;}return false;}
#ifdef DEBUG
#define debug(x) cout<<"LINE "<<__LINE__<<": "<<#x<<" = "<<x<<endl;
#else
#define debug(x) (void)0
#endif

namespace templates{
  ll modpow(ll x, ll b){
    ll res = 1;
    while(b){
      if(b&1)res = res * x % MOD;
      x = x * x % MOD;
      b>>=1;
    }
    return res;
  }

  ll modinv(ll x){
    return modpow(x, MOD-2);
  }

  bool was_output = false;
  template<class t>
  void output(t a){
    if(was_output)cout << " ";
    cout << a;
    was_output = true;
  }
  void outendl(){
    was_output = false;
    cout << endl;
  }
  ll in(){
    ll res;
    scanf("%lld", &res);
    return res;
  }

  template<class t>
  istream& operator>>(istream&is, vector<t>&x){
    for(auto &i:x)is >> i;
    return is;
  }

  template<class t, class u>
  istream& operator>>(istream&is, pair<t, u>&x){
    is >> x.first >> x.second;
    return is;
  }

  template<class t>
  void in(t&x){
    cin >> x;
  }

  template<class t>
  t in(){
    t res; cin >> res; return res;
  }

  template<class t>
  void out(t x){
    cout << x;
  }

  template<class t>
  vector<t> sorted(vector<t> line,function<bool(t,t)> comp=[](t a,t b){return a<b;}){
    sort(line.begin(),line.end(),comp);
    return line;
  }

  template<class t>
  vector<t> reversed(vector<t> line){
    reverse(line.begin(),line.end());
    return line;
  }
}

using namespace templates;

ll func(ll n,ll m){
  vector<pll> line(n);
  foreach(i,line)i=in<pll>();
  sort(all(line),[](pll x,pll y){return x.second>y.second;});
  ll res = 0;
  foreach(i,line){
    ll use = min(m,i.first);
    res += (i.first-use) * i.second;
    m -= use;
  }
  return res;
}

int main(){
  int n;
  int m;
  while(cin>>n>>m&&n){
    cout << func(n,m) << endl;
  }
  return 0;
}

