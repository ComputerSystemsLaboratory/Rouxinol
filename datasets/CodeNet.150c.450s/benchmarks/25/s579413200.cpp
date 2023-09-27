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
	string s;
	map<char, int> mp;
	while (getline(cin, s)) {
		for (auto & e : s) {
			if (e >= 'A' && e <= 'Z') e += 32;
			mp[e]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		char c = (i + 'a');
		cout << c << " : " << mp[c] << endl;
	}
	return 0;
}

