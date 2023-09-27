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

class union_find{
public:
	int n;
	vector<int> parent;
	union_find(int _n):n(_n){
		parent.resize(n);
		rep(i, n){
			parent[i]=i;
		}
	}

	int get_parent(int x){
		if(parent[x]==x)return x;
		return parent[x] = get_parent(parent[x]);
	}

	bool is_same(int a, int b){
		int ap = get_parent(a);
		int bp = get_parent(b);
		return ap == bp;
	}

	void merge(int a, int b){
		int ap = get_parent(a);
		int bp = get_parent(b);
		if(ap==bp)return;
		parent[bp] = ap;
	}

};

int main(){
	int n;
	int m;
	cin >> n >> m;
	union_find uni(n);
	rep(i, m){
		int a, b;
		cin >> a >> b;
		uni.merge(a, b);
	}
	int q;
	cin >> q;
	rep(i, q){
		int a, b;
		cin >> a >> b;
		cout << (uni.is_same(a, b)?"yes":"no") << endl;
	}
	return 0;
}

