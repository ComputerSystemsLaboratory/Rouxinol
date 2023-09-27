#include <bits/stdc++.h>
 
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(a) (a).begin(),(a).end()
 
using namespace std;
using ll  = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
 
const ll MOD  = 1e9 + 7;
const ll LINF = 1LL << 60;
const int INF = 1e9 + 7;

vector<pll> Factor(ll n){
    vector<pll> prime;
    ll sq = sqrt(n) + 1;

    for(int i = 2; i <= sq; ++i){
        sq = sqrt(n) + 1;
        if(n%i == 0){
            prime.push_back(make_pair(i, 0));
            while(n%i == 0){
                n /= i;
                prime[prime.size()-1].second++;
            }
        }
    }

    if(n != 1){
        prime.push_back(make_pair(n, 1));
    }

    return prime;
}

int main(){
    ll n;
    cin >> n;

    vector<pll> fac = Factor(n);

    cout << n << ":";

    rep(i, fac.size()){
        rep(j, fac[i].second)cout << " " << fac[i].first;
    }
    cout << endl;
}
