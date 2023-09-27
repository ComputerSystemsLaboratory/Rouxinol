#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define pb(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;



int main() {
	int n, q, t = 0;
	cin >> n >> q;
	queue < pair<string, int> > a, ans;
	REP(i, n) {
		string s;
		cin >> s;
		int b;
		cin >> b;
		a.push(make_pair(s, b));
	}
	while (!a.empty()) {
		int c = a.front().second;
		c-=q;
		if (c <= 0) {
			t += a.front().second;
			ans.push(make_pair(a.front().first, t));
			a.pop();
		}
		else {
			t += q;
			pair<string, int> d = make_pair(a.front().first, a.front().second - q);
			a.pop();
			a.push(d);
		}
	}
	REP(i, n) {
		cout << ans.front().first << " " << ans.front().second << endl;
		ans.pop();
	}

	return 0;
}