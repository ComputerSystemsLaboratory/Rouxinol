#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define _USE_MATH_DEFINES
#include <math.h>
#define rep(i,n) for(int i = 0;i < n;i++)
#define NIL = -1;

ll gcd(long long a,long long b) {
    if (a < b) swap(a,b);
    if (b == 0) return a;
    
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    a / gcd(a,b) * b;
}
const ll mod = 1e9 + 7;
const ll INF = 1e9 + 7;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


/////////////////////////////////////////////////////////////////////////////////////////
ll modpow(ll a,ll n){
    if (n == 1) return a % mod;
    if (n % 2 == 1) return (a * modpow(a,n-1)) % mod;
    ll t = modpow(a,n/2);
    return (t * t) % mod;
}

int main(){
    ll m,n;
    cin >> m >> n;
    cout << modpow(m,n) << endl;
}   

