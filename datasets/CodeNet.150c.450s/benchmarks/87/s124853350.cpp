/**Function Template**/
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
#define ifYN(x) cout<<(x?"Yes":"No")<<"\n" 
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

bool palindrome(string s){
  bool flag=true;
  rep(i,s.size()) if(s[i]!=s[s.size()-1-i]) flag=false;
  return flag;
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

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
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
  /* isPrime[1]=false; */
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

/*bool cmp(pint a, pint b) { return a.second < b.second; }*/

/*↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓*/
int main() {
  IOS;
  while(1){
    ll h;
    cin>>h;
    if(h==0) return 0;
    vector<vector<ll>> v(h,vector<ll>(5));
    rep(i,h) rep(j,5) cin>>v[h-i-1][j];
    ll ans=0;
    bool flag=true;
    do{
      vector<vector<bool>> w(h,vector<bool>(5,true));
      flag=true;
      rep(i,h){
        if(v[i][0]!=0 && v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3] && v[i][3]==v[i][4]){
          w[i][0]=w[i][1]=w[i][2]=w[i][3]=w[i][4]=false;
          ans+=v[i][0]*5;
        }else if(v[i][0]!=0 && v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3]){
          w[i][0]=w[i][1]=w[i][2]=w[i][3]=false;
          ans+=v[i][0]*4;
        }else if(v[i][4]!=0 && v[i][4]==v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3]){
          w[i][4]=w[i][1]=w[i][2]=w[i][3]=false;
          ans+=v[i][4]*4;
        }else if(v[i][0]!=0 && v[i][0]==v[i][1] && v[i][1]==v[i][2]){
          w[i][0]=w[i][1]=w[i][2]=false;
          ans+=v[i][0]*3;
        }else if(v[i][1]!=0 && v[i][1]==v[i][2] && v[i][2]==v[i][3]){
          w[i][3]=w[i][1]=w[i][2]=false;
          ans+=v[i][1]*3;
        }else if(v[i][2]!=0 && v[i][2]==v[i][3] && v[i][3]==v[i][4]){
          w[i][3]=w[i][4]=w[i][2]=false;
          ans+=v[i][2]*3;
        }
      }
      rep(i,h){
        rep(j,5){
          ll tmp=i;
          if(!w[i][j]){
            while(tmp<h){
              tmp++;
              if(tmp==h){
                v[i][j]=0;
                w[i][j]=false;
              }else if(w[tmp][j]){
                w[tmp][j]=false;
                v[i][j]=v[tmp][j];
                w[i][j]=true;
                v[tmp][j]=0;
                break;
              }
            }
          }
        }
      }
      rep(i,h) rep(j,5) if(!w[i][j]) flag=false;
    }while(!flag);
    cout<<ans<<endl;
  }
}
