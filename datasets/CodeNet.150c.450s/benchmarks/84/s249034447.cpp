#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
using P=pair<int,int>;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
const ll mod=1000000007;
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
template<typename T>
struct BIT{
    //1-index
    private:
    V<T> arr;
    int n;

    public:
    BIT(int siz){
        n=siz;
        arr.assign(n+1,0);
    }
    //一点更新
    void add(T a,T v){
        //x+=(x&-x) 初項a,それ以降a<=2^Nが列挙
        for(T x=a;x<=n;x+=(x&-x)){
            arr[x]+=v;
        }
    }
    T sum(T a){
        T ret=0;
        for(T x=a;x>0;x-=(x&-x))ret+=arr[x];
        return ret;
    }
};
int main(){
 int n;
 cin>>n;
 ll ans=0;
 BIT<ll> t(n);
 V<ll> v(n);
  map<ll,int> mp;
 for(int i=0;i<n;i++){
     cin>>v[i];
     mp[v[i]];
 }
 ll cnt=1;
 for(auto &p:mp)p.se=cnt++;
 for(int i=0;i<n;i++){
     ans+=i-t.sum(mp[v[i]]);
     t.add(mp[v[i]],1);
 }
 cout<<ans<<endl;
}
