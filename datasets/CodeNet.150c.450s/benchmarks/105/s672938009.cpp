#include<bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define io std::ios::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
const double pi=acos(-1);
const ll P = 998244353, INF = 0x3f3f3f3f;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll qpow(ll a,ll n){ll r=1%P;for (a%=P; n; a=a*a%P,n>>=1)if(n&1)r=r*a%P;return r;}
const double eps=1e-5;
ll lcm(ll a,ll b){return a*b/gcd(a,b);};
const int maxn = 200 + 10;
ll a[maxn];
const int L = 63;
ll d[L];
bool add(ll x){
    for(int i = L - 1; i >= 0; i--) if(x & 1ll << i){
        if(d[i] == -1){d[i] = x; return true;}
        x ^= d[i];
    }
    return false;
}

int main(){
//    Fast;
    int t; scanf("%d", &t); while(t--){
        memset(d, -1, sizeof d);
        
        int n; scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%lld", a + i);
        char s[maxn]; scanf("%s", s);
        int flag = 0;
        for(int i = n - 1; i >= 0; i--){
            if(add(a[i]) && s[i] == '1'){
                flag = 1;
                break;
            }
        }
        printf("%d\n", flag);
    }
    return 0;
}