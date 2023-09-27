#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) for(int i = (n) - 1; (i) >= 0; --i)
#define SZ(n) (int)(n).size()
#define ALL(n) (n).begin(), (n).end()
#define MOD LL(1e9 + 7)
#define INF 1000000
using namespace std;
using LL = long long;


int main() {
	string w, t;
	cin >> w;
	for (auto & e : w) {
		if (e >= 'A' && e <= 'Z') e += 32;
	}
	int sum = 0;
	while (cin >> t) {
		for (auto & e : t) {
			if (e >= 'A' && e <= 'Z') e += 32;
		}
		if (t == w) sum++;
	}
	cout << sum << endl;
	return 0;
}

