#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;
using vb=vector<bool>;
using pii=pair<int,int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

//pow(llpow,modpow)
template<class T> ll llpow(ll x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
long long modpow(long long a, long long n, long long mod) {long long res = 1;while (n > 0) {if (n & 1) res = res * a % mod;a = a * a % mod;n >>= 1;}return res;}
//最大公約数
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
//最小公倍数
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}
//逆元
long long modinv(long long a, long long m) {long long b = m, u = 1, v = 0;while (b) {long long t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}

#define rep(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main( ){
    int n,m;
    cin>>n>>m;
    vi conne[n];
    rep(i,0,m){
        int s,t;
        cin>>s>>t;
        conne[s].push_back(t);
        conne[t].push_back(s);
    }
    int white=0;
    vi color(n,white);
    int c=1;
    rep(i,0,n){
        c++;
        if(color[i]==white){
        stack<int> st;
        st.push(i);
        while(!st.empty()){
            int n=st.top(); st.pop();
            color[n]=c;
            for(int itr:conne[n]){
                if(color[itr]!=c){
                    st.push(itr);
                }
            }
        }
        }
    }
    int q; cin>>q;
    rep(i,0,q){
        int from,to;
        cin>>from>>to;
        if(color[from]==color[to])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}



