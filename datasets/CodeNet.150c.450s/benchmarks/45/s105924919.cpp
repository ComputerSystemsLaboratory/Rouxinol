#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD 1000000007
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template<class T>void print(T x){cout << x << endl;}
template<class T>void printvec(vector<T>& a){rep(i, a.size()-1){cout << a[i] << " ";} cout << a[a.size()-1] << endl;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll power(ll m, ll n, ll mod){
    ll res=1;
    while(n>0){
        if(n & 1) res = res * m % mod;
        m = m*m%mod;
        n >>= 1;
    }
    return res;
}

int main()
{
    ll n, m;
    cin >> m >> n;

    printf("%lld\n", power(m, n, MOD));
    return 0;
}
