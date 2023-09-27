/*Function Template*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> pint;
const int MAX = 510000;
const int MOD = 1000000007;
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define Rep(i, n) for(ll i = 1; i < (n); i++)
#define ALL(a)  (a).begin(),(a).end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PI 3.14159265358979323846
ll fac[MAX], finv[MAX], inv[MAX];


template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }

}
ll Len(ll n) {
  ll s=0;
  while(n!=0) s++, n/=10;
  return s;
}


ll Sint(ll n) {
  ll m=0,s=0,a=n;
  while(a!=0) s++, a/=10;
  for(ll i=s-1;i>=0;i--) m+=n/((ll)pow(10,i))-(n/((ll)pow(10,i+1)))*10;
  return m;
}


ll Svec(vector<ll> v){
  ll n=0;
  for(ll i=0;i<v.size();i++) n+=v[i];
  return n;
}


ll GCD(ll a,ll b) {
  return b ? GCD(b,a%b) : a;
}


ll LCM(ll a,ll b){
  return a/GCD(a,b)*b;
}


ll Factorial(ll n){
  ll m=1;
  while(n>=1) m*=n,n--;
  return m;
}

void runlength(string s,vector<pair<char,ll>> &p){
  ll x=1;
  if(s.size()==1){
    p.push_back(pair<char,ll>(s[0],1));
  }
  for(ll i=0;i<s.size()-1;i++){
    if(s[i]==s[i+1]){
      x++;
      if(i==s.size()-2){
        p.push_back(pair<char,ll>(s[i],x));
      }
    }else{
      p.push_back(pair<char,ll>(s[i],x));
      x=1;
      if(i==s.size()-2){
        p.push_back(pair<char,ll>(s[s.size()-1],x));
      }
    }
  }
}

ll COM(ll n,ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


string Toupper(string s){
  string ans="";
  rep(i,s.size()){
    if('a'<=s[i] && s[i]<='z') ans+=(char)s[i]-32;
    else ans+=s[i];
  }
  return ans;
}
string Tolower(string s){
  string ans="";
  rep(i,s.size()){
    if('A'<=s[i] && s[i]<='Z') ans+=(char)s[i]+32;
    else ans+=s[i];
  }
  return ans;
}


const int MAX_N=100010;
vector<bool> sieve_of_eratosthenes(){
  vector<bool> isPrime(MAX_N+1,true);
  for(int i=2;i<=MAX_N;i++){
    if(isPrime[i]){
      for(int j=2*i;j<=MAX_N;j+=i){
        isPrime[j]=false;
      }
    }
  }
  return isPrime;
}

vector<pint> prime_factorize(ll n){
  vector<pint> ans;
  for(ll p=2;p<=sqrt(n);p++){
    if(n%p!=0) continue;
    ll cnt=0;
    while(n%p==0){
      n/=p;
      cnt++;
    }
    ans.push_back(make_pair(p,cnt));
  }
  if(n!=1) ans.push_back(make_pair(n,1));
  return ans;
}
struct edge{ll u,v,cost;};
/*bool cmp(pint a, pint b) { return a.second < b.second; }*/
bool cmp(edge e1,edge e2){
  return e1.cost<e2.cost;
}
/* Union-Find木 */
struct UnionFind {
    vector<ll> par;
    
    UnionFind(ll n) : par(n, -1) { }
    void init(ll n) { par.assign(n, -1); }
    
    ll root(ll x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
   

    bool issame(ll x, ll y) {
        return root(x) == root(y);
    }
    
    bool merge(ll x, ll y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    ll size(ll x) {
        return -par[root(x)];
    }
};
/*↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓*/
int main() {
  IOS;
  ll n,m;
  cin>>n>>m;
  vector<edge> v;
  rep(i,m){
    ll a,b,c;cin>>a>>b>>c;
    v.push_back(edge{a,b,c});
  }
  UnionFind uf(n);
  ll ans=0;
  sort(ALL(v),cmp);
  rep(i,m){
    if(uf.issame(v[i].u,v[i].v))  continue;
    ans+=v[i].cost;
    uf.merge(v[i].u,v[i].v);
  }
  cout<<ans<<endl;
}
