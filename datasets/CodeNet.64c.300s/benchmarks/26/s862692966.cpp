#include <iostream>
using namespace std;
typedef long long ll;

ll M;
ll N;
static const ll mod = 1000000007;

ll pow(ll n, ll p, ll mod){
    if(p==0) return 1;
    ll res = pow(n * n % mod, p /2, mod);
    if(p % 2 == 1) res = res * n % mod;
    return res;
}

int main(void){
    cin >> M >> N;
    cout << pow(M, N, mod) << endl;
}

