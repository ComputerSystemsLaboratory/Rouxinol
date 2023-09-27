#include <iostream>
#include <assert.h>
#include <math.h>
#include <algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool solve(ll x, ll y, ll n){
    ll sq = -3*(x*x)-2*x*y+4*n-3*(y*y);
    if(sq < 0) return 0;
    ll temp = sq;
    sq = sqrt(sq);
    if(sq * sq != temp) return 0;
    ll sol1 = (-y-x+(ll)sq)/2;
    ll sol2 = (-y-x-(ll)sq)/2;
    if(sol1 > 0 || sol2 > 0){
        return true;
    }else{
        return false;
    }
}

int main(){ ll n;
    cin >> n;
    for (ll i=1; i<=n; i++){
        ll ans = 0;
        for (ll j=1; j<=sqrt(i); j++){
            for (ll k=1; k<=sqrt(i); k++){
                if (solve(j, k, i)) {
                    ++ans;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}