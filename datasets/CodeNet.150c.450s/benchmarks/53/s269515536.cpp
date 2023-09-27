#include<bits/stdc++.h>
#define rep(i, n) for(int i=0;i<(n);++i)
#define per(i, n) for(int i=(n)-1;i>=0;--i)
#define repa(i, n) for(int i=1;i<(n);++i)
#define foreach(i, n) for(auto &i:(n))
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define bit(x) (1ll << (x))
using namespace std;
using ll = long long;
const ll MOD = (ll)1e9+7;
//const ll MOD = 998244353;
//const ll MOD = 924844033;
const int INF = (ll)1e9+7;
const ll INFLL = (ll)1e18;
const double EPS = 1e-5;
using namespace std;
template<class t>
using vvector = vector<vector<t>>;
template<class t>
using vvvector = vector<vector<vector<t>>>;
template<class t>
using priority_queuer = priority_queue<t, vector<t>, greater<t>>;
template<class t, class u> bool chmax(t &a, u b){if(a<b){a=b;return true;}return false;}
template<class t, class u> bool chmin(t &a, u b){if(a>b){a=b;return true;}return false;}

#ifdef DEBUG
#define OUTPUT(x) (output(x), outendl())
#else
#define OUTPUT(x) (void)0
#endif

ll modpow(ll x, ll b){
	ll res = 1;
	while(b){
		if(b&1)res = res * x % MOD;
		x = x * x % MOD;
		b>>=1;
	}
	return res;
}

ll modinv(ll x){
	return modpow(x, MOD-2);
}

ll in(){
	ll x;
	scanf("%lld",&x);
	return x;
}

bool was_output = false;
template<class t>
void output(t a){
	if(was_output)cout << " ";
	cout << a;
	was_output = true;
}
void outendl(){
	was_output = false;
	cout << endl;
}

//素因数分解をして配列で返します
vector<pair<long long,long long>> prime_factorize(ll x){
	using P = pair<long long,long long>;
	vector<P> res;
	for(int i=2;i*i<=x;++i){
		int cnt = 0;
		while(x%i==0){
			x /= i;
			++cnt;
		}
		if(cnt){
			res.emplace_back(i,cnt);
		}
	}
	if(x>1)res.emplace_back(x,1);
	return res;
}

int main(){
	ll n;
	cin >> n;
	cout << n << ":";
	vector<pll> ans = prime_factorize(n);
	foreach(i,ans){
		rep(j,i.second){
			cout << " " << i.first;
		}
	}
	cout << endl;
	return 0;
}

