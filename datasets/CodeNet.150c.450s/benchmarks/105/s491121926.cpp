#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i,n) for(int i=0; i<int(n); i++)
#define FOR(i,m,n) for(int i=int(m); i<int(n); i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define VI vector<int>
#define VP vector<pair<int,int>>
#define VPP vector<pair<int,pair<int,int>>>
#define VLL vector<long long>
#define VVI vector<vector<int>>
#define VVLL vector<vector<long long>>
#define VC vector<char>
#define VS vector<string>
#define VVC vector<vector<char>>
#define VB vector<bool>
#define VVB vector<vector<bool>>
#define fore(i,a) for(auto &i:a)
typedef pair <int, int> P;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int  INF = 1 << 30;
const ll INFL = 1LL << 60;
const ll mod = 998244353;


void Gauss(vector<long long> &A) {
	int rank = 0;
	for (int d = 0; d < 62; ++d) {
		int pivot = -1;
		for (int i = rank; i < (int)A.size(); ++i) {
			if (A[i] & (1LL << d)) {
				pivot = i;
				break;
			}
		}
		if (pivot == -1) continue;
		swap(A[rank], A[pivot]);
		for (int j = 0; j < (int)A.size(); ++j) {
			if (j == rank) continue;
			if (!(A[j] & (1LL << d))) continue;
			A[j] ^= A[rank];
		}
		++rank;
	}


}


void solve() {

	int n;
	cin >> n;

	VLL a(n);

	ll ans = 0;

	REP(i, n) {
		cin >> a[i];
	}
	string s;
	cin >> s;
	cerr << "                                   ";
	REP(i, n) {
		if (s[i] == '0')continue;
		
		VLL b;
		FOR(j, i + 1, n) {
			if (s[j] == '0')b.push_back(a[j]);
		}

		if (b.size() == 0) {
			cout << 1 << endl;
			return;
		}

		VI aa(62, 0);
		REP(j, 62) {
			if (a[i] & (1 << j))aa[j] = 1;
		}
		Gauss(b);
		sort(ALL(b));
		
		VLL c;
		REP(j, b.size()) {
			if (b[j] != 0)c.push_back(b[j]);
		}
		if (c.size() == 0) {
			cout << 1 << endl;
			return;
		}
		c.push_back(a[i]);
		Gauss(c);
		sort(ALL(c));
		if (c[0] != 0) {
			cout << 1 << endl;
			return;
		}




	}

	cout << 0 << endl;




}

int main() {
	int t;
	cin >> t;

	REP(qi, t) {
		solve();
	

	}





}