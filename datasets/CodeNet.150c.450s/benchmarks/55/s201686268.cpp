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
	string x;
	while (cin >> x) {
		if (x[0] == '0') break;
		int sum = 0;
		for (auto & e : x) {
			sum += e - '0';
		}
		cout << sum << endl;
	}
	return 0;
}

