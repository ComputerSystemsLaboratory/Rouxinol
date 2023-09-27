#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i=(a);i<ll(b);i++)
#define rep(i,b) loop(i,0,b)

bool isPrime(const ll &n){
    if(n == 2) return true;
    if(n < 2 || n%2 == 0) return false;
    const ll m = n-1, d = m / (m & -m);
    auto modpow = [&](ll a, ll b){
        ll res = 1;
        while(b){
            if(b&1) res = res*a%n;
            a = a*a%n;
            b >>= 1;
        }
        return res;
    };
    auto suspect = [&](ll a, int t){
        a = modpow(a,t);
        while(t != n-1 && a != 1 && a != n-1){
            a = a*a%n;
            t *= 2;
        }
        return a == n-1 || t%2 == 1;
    };
    const int witness[] = {2,3,5,61,0}; // 要検証
    for(const int *w = witness; *w < n && *w; w++){
        if(!suspect(*w,d)) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i,n){
        ll x;
        cin >> x;
        ans += isPrime(x);
    }
    cout << ans << endl;
}