#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second
template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1 ; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1 ; } return 0; }
typedef long long ll;
typedef pair<int, int> pii;
const ll INF = 1e9+100;
const bool debug = 0;
/***************************************/

string to_str(int a) {
	ostringstream ss;
	ss << a;
	return ss.str();
}

int solve(int a, int n) {
	string s = to_str(a);
	while (s.size() < n) s += '0';
	sort(ALL(s), greater<int>());
	int ma = atoi(s.c_str());
	sort(ALL(s));
	int mi = atoi(s.c_str());
	return ma - mi;
}

int main() {
	int a[31], l;
	while (cin >> a[0] >> l, a[0] || l) {
		if (debug) printf("@ ");
		REP(i, 30) a[i + 1] = solve(a[i], l);
		
		bool done = false;
		REP(i, 31) {
			if (done) break;
			FOR(j, i + 1, 31) {
				if (a[i] == a[j]) {
					printf("%d %d %d\n", i, a[j], j - i);
					done = true;
					break;
				}
			}
		}
	}
	return 0;
}
