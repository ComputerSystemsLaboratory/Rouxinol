#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,b) for(int i = 0; i < (int)(n); i++)
bool isPrime(const ll &n){
    if(n == 2) return true;
    if(n < 2 || n%2 == 0) return false;
    const ll m = n-1, d = m / (m & -m);
    auto modmul = [&](ll a, ll b){
        ll res = 0;
        while(b){
            if(b&1) res = (res+a)%n;
            a = (a+a)%n;
            b >>= 1;
        }
        return res;
    };
    auto modpow = [&](ll a, ll b){
        ll res = 1;
        while(b){
            if(b&1) res = modmul(res,a);
            a = modmul(a,a);
            b >>= 1;
        }
        return res;
    };
    auto suspect = [&](ll a, int t){
        a = modpow(a,t);
        while(t != -1+n && a != 1 && a != -1+n){
            a = modmul(a,a);
            t *= 2;
        }
        return a == n-1 || t%2 == 1;
    };
    const int witness[] = {2,7,61,0}; // n <= 2^32
    // const int witness[] = {2,325,9375,28178,450775,9780504,1795265022,0}; // n <= 2^64
    for(const int *w = witness; *w < n && *w; w++){
        if(!suspect(*w,d)) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
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