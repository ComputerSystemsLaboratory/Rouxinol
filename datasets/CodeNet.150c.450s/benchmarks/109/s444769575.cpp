#include<bits/stdc++.h>
#define rep(i,a) for(int i=(int)0;i<(int)a;++i)
#define rrep(i,a) for(int i=(int)a-1;i>=0;--i)
#define REP(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define RREP(i,a,b) for(int i=(int)a-1;i>=b;--i)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
typedef std::vector<int> vi;
typedef std::vector<std::vector<int>> vvi;
typedef std::vector<long long> vl;
typedef std::vector<std::vector<long long>> vvl;
#define out(x) cout<<x<<"\n";
using ll=long long;
constexpr ll mod = 1e9 + 7;
constexpr ll INF = 1LL << 60;

ll gcd(ll n, ll m) {
    ll tmp;
    while (m!=0) {
        tmp = n % m;
        n = m;
        m = tmp;
    }
    return n;
}

ll lcm(ll n, ll m) {
    return abs(n) / gcd(n, m)*abs(m);//gl=xy
}
 
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
 
using namespace std;

int n;

void solve(){
  vector<int>imos(90000+5);
  rep(i,n){
    string s,t;
    cin>>s>>t;
    int sh=(s[0]-'0')*36000+(s[1]-'0')*3600;
    int sm=(s[3]-'0')*600+(s[4]-'0')*60;
    int ss=(s[6]-'0')*10+(s[7]-'0');
    int th=(t[0]-'0')*36000+(t[1]-'0')*3600;
    int tm=(t[3]-'0')*600+(t[4]-'0')*60;
    int ts=(t[6]-'0')*10+(t[7]-'0');
    imos[sh+sm+ss]++;
    imos[th+tm+ts]--;
  }
  int ans=0;
  rep(i,9e4)imos[i+1]+=imos[i];
  rep(i,9e4)chmax(ans,imos[i]);
  cout<<ans<<"\n";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<fixed<<setprecision(15);
    while(1){
      cin>>n;
      if(n==0)break;
      solve();
    }
    //solve();
    return 0;
}

