#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vvi = vector<vector< ll > >;
using vpi = vector<pair<ll,ll> >;
using pi = pair<ll,ll>;
using st = set<ll>;
using kiwi = queue<ll>;
using mp = map<ll,ll>;
using ump = unordered_map<ll,ll>;
#define MOD 1000000007
const ll mx = 1e5+123;
#define REP(i,n) for (ll i=1;i<=n;++i)

#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(){
    fastio;
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    ll n, k; cin>>n>>k;
    vi V(n);
    for(auto& x:V)
        cin>>x;
    for(ll i=0;i<n-k;++i){
        if(V[i]<V[i+k]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

return 0;
}
