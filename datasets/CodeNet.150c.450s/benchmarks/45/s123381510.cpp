#include<bits/stdc++.h>
const long long INF = INT_MAX / 2;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define ll long long int
using namespace std;
ll ans = 0, sum = 0, n, k, cnt = 0, w, h;
string s;
vector<ll> v;
vector < pair<ll, ll > > vp;
vector<vector<ll> > vv(50, vector<ll>(50, INF));
vector<string> vs;
vector<char> vc;
set<ll> st;
map<char, ll> mp;

/*--------------------template--------------------*/

ll power(ll x, ll n, ll M) {
	ll tmp = 1;
	if (n > 0) {
		tmp = power(x, n / 2, M);
		if (n % 2 == 0) tmp = (tmp*tmp) % M;
		else tmp = (((tmp*tmp) % M)*x) % M;
	}
	return tmp;
}

int main() {
	cin >> n >> k;
	cout << power(n, k, MOD) << endl;
}