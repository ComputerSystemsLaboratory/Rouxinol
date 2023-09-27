#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;

ll binary_power(ll a, ll n) {
    if (n==0) return 1;
    ll k=binary_power(a,n/2);
    if (n%2==0) return (k*k)%MOD;
    else return (((k*k)%MOD)*a)%MOD;
}


int main() {
    ios_base::sync_with_stdio(false);

    ll a,n;
    cin >> a >> n;
    cout << binary_power(a,n) << endl; 

    return 0;   
}

