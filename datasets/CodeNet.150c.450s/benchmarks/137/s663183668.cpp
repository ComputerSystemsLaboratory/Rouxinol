#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;

int ch(char c) {
	switch (c) {
	case 'A':
		return 1;
	case 'C':
		return 2;
	case 'G':
		return 3;
	default:
		return 4;
	}
}

long long gethash(string s) {
	long long sum = 0;int p = 1;
	REP(i, s.size()) {
		sum += ch(s[i])*p;
		p *= 4;
	}
	return sum;
}

int main() {
	vector<int> h(1 << 24, 0);
	int n;

	cin >> n;
	REP(i, n) {

		string s, t;
		cin >> s >> t;
		if (s[0] == 'i') {
			h[gethash(t)-1] = 1;
		}
		else if (s[0] == 'f') {
			if (h[gethash(t)-1]) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}