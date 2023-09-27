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

void max_heapify(vector<int> &line, int i){
	int l = i * 2;
	int r = i * 2 + 1;
	int largest = i;
	if(l<=line.size() && line[l] > line[i]){
		largest = l;
	}
	if(r<=line.size() && line[r] > line[largest]){
		largest = r;
	}
	if(largest != i){
		swap(line[i], line[largest]);
		max_heapify(line, largest);
	}
}

void build_max_heap(vector<int> &line){
	for(int i = line.size() / 2 + 1;i>=1;--i){
		max_heapify(line, i);
	}
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

	build_max_heap(line);
	for(int i=1;i<=n;++i){
		cout << " " << line[i];
	}
	cout << endl;

	return 0;
}

