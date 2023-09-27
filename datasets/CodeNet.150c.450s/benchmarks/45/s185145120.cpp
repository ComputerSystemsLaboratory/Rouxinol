#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define _GLIBCXX_DEBUG

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vd = vector<double>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvd = vector<vd>;
using vvvi = vector<vvi>;
using vvvll = vector<vvll>;
using vvvd = vector<vvd>;

const double pi=acos(-1);
const ll MOD=1e9+7;
const ll INF=(1LL<<60);

int main() {
    ll n,m;
    cin>>m>>n;
    ll num=0;
    ll num2=1;
    vll v;
    v.push_back(m);
    while (num2<=n){
        ll num1=(v[num]*v[num])%MOD;
        v.push_back(num1);
        num+=1;
        num2*=2;
    }
    bitset<33> s(n);
    ll ans=1;
    rep(i,num+1){
        if (s.test(i)){
            ans*=v[i];
            ans%=MOD;
        }
    }
    ans%=MOD;
    cout<<ans<<endl;

    return 0;
}
