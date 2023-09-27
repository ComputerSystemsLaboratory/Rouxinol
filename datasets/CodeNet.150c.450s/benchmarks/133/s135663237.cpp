#include<bits/stdc++.h>
//ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//clock_t start=clock();clock_t end=clock();cout<<(double)(end-start)/CLOCKS_PER_SEC<<endl;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef pair<int,int> pii;
typedef pair<pii,int> ppii;
typedef pair<int,pii> pipi;
typedef pair<ll,ll> pll;
typedef pair<pll,ll> ppll;
typedef pair<ll,pll> plpl;
typedef pair<pii,pii> pippi;
typedef tuple<ll,ll,ll> tl;
typedef pair<double,double> pdd;
typedef vector<vector<ll>> mat;
ll mod=1000000007;
ll mod2=998244353;
ll mod3=1000003;
ll mod4=998244853;
ll mod5=1000000009;
ll inf=1LL<<61;
int iinf=1<<30;
double pi=3.141592653589793238462643383279L;
double eps=1e-8;
#define rep(i,m,n) for(ll i=m;i<n;i++)
#define rrep(i,n,m) for(ll i=n;i>=m;i--)
#define srep(itr,st) for(auto itr=st.begin();itr!=st.end();itr++)
#define mrep(itr,mp) for(auto& itr:mp)
#define Max(a,b) a=max(a,b)
#define Min(a,b) a=min(a,b)
//#define endl "\n"
int dh[4]={1,-1,0,0};
int dw[4]={0,0,1,-1};
int ddh[8]={-1,-1,-1,0,0,1,1,1};
int ddw[8]={-1,0,1,-1,1,-1,0,1};
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
#define umh unordered_map<int,int,custom_hash>
ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    if(a%b==0)return b;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    ll c=gcd(a,b);
    return a*b/c;
}
ll Pow(ll n,ll k){
    if(k<0)return 0;
    ll ret=1;
    ll now=n;
    while(k>0){
        if(k&1)ret*=now;
        now*=now;
        k/=2;
    }
    return ret;
}
ll beki(ll n,ll k,ll md){
  ll ret=1;
  ll now=n;
    now%=md;
  while(k>0){
    if(k%2==1){
      ret*=now;
      ret%=md;
    }
    now*=now;
    now%=md;
    k/=2;
  }
  return ret;
}
ll gyaku(ll n,ll md){
  return beki(n,md-2,md);
}
ll popcount(ll n){
    ll ret=0;
    ll u=n;
    while(u>0){
        ret+=u%2;
        u/=2;
        
    }
    return ret;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int d;cin>>d;
    int c[26];
    rep(i,0,26)cin>>c[i];
    int s[d+1][26];
    rep(i,1,d+1)rep(j,0,26)cin>>s[i][j];
    ll now=0;
    vector<int> v[26];
    rep(i,0,26)v[i].push_back(0);
    int t[d+1];
    rep(i,1,d+1){
        cin>>t[i];
        t[i]--;
        v[t[i]].push_back(i);
        now+=s[i][t[i]];
        rep(j,0,26){
            int las=v[j].back();
            now-=c[j]*(i-las);
        }
        cout<<now<<endl;
    }
    /*//cout<<now<<endl;
    int m;cin>>m;
    rep(i,0,26)v[i].push_back(d+1);
    rep(i,0,m){
        int dd,q;cin>>dd>>q;
        q--;
        int pre=t[dd];
        if(pre==q){
            cout<<now<<endl;
            continue;
        }
        int y=lower_bound(v[pre].begin(),v[pre].end(),dd)-v[pre].begin();
        int d1=v[pre][y-1];
        int d3=v[pre][y+1];
        now+=c[pre]*(d1-dd)*(d3-dd);
        v[pre].erase(v[pre].begin()+y);
        y=lower_bound(v[q].begin(),v[q].end(),dd)-v[q].begin();
        int q1=v[q][y-1],q3=v[q][y];
        now+=c[q]*(dd-q1)*(q3-dd);
        v[q].insert(v[q].begin()+y,dd);
        //cout<<d1<<" "<<d3<<" "<<q1<<" "<<q3<<" "<<pre<<endl;
        now+=s[dd][q]-s[dd][pre];
        t[dd]=q;
        
        cout<<now<<endl;
    }*/
}
