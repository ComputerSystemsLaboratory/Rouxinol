#include "bits/stdc++.h"

#define REP(i,n) for(ll i=0;i<n;++i)
#define RREP(i,n) for(ll i=n-1;i>=0;--i)
#define FOR(i,m,n) for(ll i=m;i<n;++i)
#define RFOR(i,m,n) for(ll i=n-1;i>=m;--i)
#define ALL(v) (v).begin(),(v).end()
#define PB(a) push_back(a)
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end());
#define DUMP(v) REP(aa, (v).size()) { cout << v[a]; if (a != v.size() - 1)cout << " "; else cout << endl; }
#define INF 1000000001ll
#define MOD 1000000007ll
#define EPS 1e-9

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll max(ll a, int b) { return max(a, ll(b)); }
ll max(int a, ll b) { return max(ll(a), b); }
ll min(ll a, int b) { return min(a, ll(b)); }
ll min(int a, ll b) { return min(ll(a), b); }
///(´・ω・`)(´・ω・`)(´・ω・`)(´・ω・`)(´・ω・`)(´・ω・`)///
bool comp(pii a, pii b) {
	if (a.first*a.first + a.second*a.second == b.first*b.first + b.second*b.second) {
		return a.first < b.first;
	}
	else {
		return a.first*a.first+a.second*a.second < b.first*b.first+b.second*b.second;
	}
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	vector<pii> v;
	FOR(i, 1, 151) {
		FOR(j, i + 1, 151) {
			v.push_back({ i,j });
		}
	}
	sort(ALL(v), comp);
	while (1) {
		int h, w;
		cin >> h >> w;
		if (!h)break;
		int c = find(ALL(v), make_pair(h, w)) - v.begin();
		cout << v[c + 1].first << " " << v[c + 1].second << endl;
	}

	return 0;
}