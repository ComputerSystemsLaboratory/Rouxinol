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

#define REP(i,n) for(unsigned int i=0;i<n;++i)
#define RREP(i,n) for(unsigned int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define INF 1000000001
#define MOD 1000000007

using namespace std;



int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, q, cnt = 0;
	cin >> n;
	vector<int> s(n);
	REP(i, n) {
		cin >> s[i];
	}
	cin >> q;
	vector<int> t(n);
	REP(i, q) {
		cin >> t[i];
	}
	REP(i, q) {
		int a = t[i];
		REP(j, n) {
			if (s[j] == a) {
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;

	return 0;
}