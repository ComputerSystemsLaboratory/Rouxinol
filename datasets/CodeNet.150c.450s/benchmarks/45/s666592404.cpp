#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>
#include<cmath>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> pll;
const ll inf = 1LL << 60;
const ll mod = 1e9 + 7;

ll mod_pow(ll m, ll n){
    ll ans = 1;
    ll times = m;
    while(n){
        if(n & 1){
            ans = ans * times % mod;
        }
        times = times * times % mod;
        n>>=1;
    }
    return ans;
}

int main(){
    //cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//cout << fixed << setprecision(15);
    ll m,n; cin>>m>>n;
    cout << mod_pow(m,n) << endl;
}
