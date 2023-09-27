#include <iostream>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll ans(int m, ll n){
    if(n==0) return 1;
    ll h = ans(m,n/2);
    if(n%2==0){
        return h%mod * h%mod % mod;
    }
    return h%mod * h%mod * m%mod;
}
int main(void){
    int m; ll n;
    cin >> m >> n;
    cout << ans(m, n) << endl;
    return 0;
}

