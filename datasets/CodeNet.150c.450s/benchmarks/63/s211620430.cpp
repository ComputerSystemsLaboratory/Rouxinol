#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;
const long long int INF = 1e18;
const long long int MOD = 1e9+7;

typedef pair<ll, ll> pairs;
typedef vector<pairs> p;


ll gcd(ll a,ll b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

ll keta(ll N){
    int tmp{};
    while( N > 0 ){
        tmp += ( N % 10 );
        N /= 10;
    }
    N = tmp;
    return N;
}

// 素数
vector<bool> IsPrime;
void sieve(size_t max){
    if(max+1 > IsPrime.size()){
        IsPrime.resize(max+1,true);
    } 
    IsPrime[0] = false;
    IsPrime[1] = false;

    for(size_t i=2; i*i<=max; ++i){
        if(IsPrime[i]){
            for(size_t j=2; i*j<=max; ++j){
                IsPrime[i*j] = false;
            }
        }
    }
}

// べき乗の余り
ll modpow(ll a, ll n){
    ll res = 1;
    while(n){
        if(n & 1){
            res = res * a % MOD;
        }
        a = a * a % MOD;
        n = n >> 1;
    }
    return res;
}

// コンビネーション
ll MAXN = 2e5+10;
vector<ll> inv(MAXN);
ll nCk(ll n, ll k) {
	ll res = 1;
	for(ll i = 1; i <= k; i++) {
		res = res*(n-i+1) % MOD;
	}
 
	for(ll i = 1; i <= k; i++) {
		res = res*inv[i] % MOD;
	}
	return res;
}

// 回文
bool kai(string S){
    bool flag = true;
    for(ll i=0;i<S.size()/2;++i){
        if(S[i] != S[S.size()-i-1]){
            flag = false;
            break;
        }
    }
    return flag;
}
// ---------------------------------------------

struct edge{
    ll to, cost;
};

int main(){
    ll v, e, r;
    cin>>v>>e>>r;
    vector<edge> g[v];
    for(ll i=0;i<e;++i){
        ll s, t, d;
        cin>>s>>t>>d;
        edge ed_1, ed_2;
        ed_1.to = t; ed_1.cost = d;
        g[s].emplace_back(ed_1);
    }

    priority_queue<pairs, p, greater<pairs>> que;
    vector<ll> d(v, INF);
    d[r] = 0;
    que.push(make_pair(0, r));
    while(!que.empty()){
        pairs p = que.top();
        que.pop();
        ll x = p.second;
        if(d[x] < p.first)continue;
        for(auto val : g[x]){
            if(d[val.to] > d[x] + val.cost){
                d[val.to] = d[x] + val.cost;
                que.push(make_pair(d[val.to], val.to));
                //cout<<d[val.to]<<' '<<val.to<<endl;
            }
        }
    }

    for(ll i=0;i<v;++i){
        if(d[i] == INF){
            cout<<"INF"<<endl;
        }else{
            cout<<d[i]<<endl;
        }
    }
    return 0;
}
