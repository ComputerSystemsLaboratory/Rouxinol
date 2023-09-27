#include<bits/stdc++.h>
#define ll long long
#define rep(i, n) for(int i=0;i<(n);++i)
#define per(i, n) for(int i=(n)-1;i>=0;--i)
#define repa(i, n) for(int i=1;i<(n);++i)
#define foreach(i, n) for(auto &i:(n))
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define bit(x) (1ll << (x))
const ll MOD = (ll)1e9+7;
const int INF = (ll)1e9+7;
const ll INFLL = (ll)1e18;
using namespace std;
template<class t>
using vvector = vector<vector<t>>;
template<class t>
using vvvector = vector<vector<vector<t>>>;
template<class t>
using priority_queuer = priority_queue<t, vector<t>, greater<t>>;
template<class t, class u> bool chmax(t &a, u b){if(a<b){a=b;return true;}return false;}
template<class t, class u> bool chmin(t &a, u b){if(a>b){a=b;return true;}return false;}

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

int main(){
	int n;
	cin >> n;
	vector<int> line(n+1);
	int size = 0;
	rep(i, n){
		int key;
		cin >> line[i+1];
	}

	for(int i=1;i<=n;++i){
		printf("node %d: key = %d, ", i, line[i]);
		if(i/2){
			printf("parent key = %d, ", line[i/2]);
		}
		if(i*2<=n){
			printf("left key = %d, ", line[i*2]);
		}
		if(i*2+1<=n){
			printf("right key = %d, ", line[i*2+1]);
		}
		cout << endl;
	}

	return 0;
}

