#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;
const int inf = 1e9;
const long long INF = 1LL << 60;   // INFの値は1152921504606846976

ll pow(ll x,ll n, ll m){  // xのn乗 (mod m)
    ll res = 1;
    if(n > 0){
        res = pow(x,n / 2,m);
        if(n % 2 == 0){
            res = (res * res) % m;
        }else{
            res = (((res * res) % mod) * x) % m;
        }
    }
    return res;
}

int main()
{
    ll m,n;
    cin >> m >> n;
    cout << pow(m,n,mod) << endl;;

}
