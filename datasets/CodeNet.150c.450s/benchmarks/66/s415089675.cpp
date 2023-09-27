#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <set>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	set<string> st;
	int n, m;
	cin >> n;
	REP(i, n) {
		string s;
		cin >> s;
		st.insert(s);
	}
	cin >> m;
	bool opened = false;
	REP(i, m) {
		string t;
		cin >> t;
		if (st.count(t)) {
			if (opened) {
				cout << "Closed by ";
			}
			else {
				cout << "Opened by ";
			}
			opened = !opened;
			cout << t << endl;
		}
		else {
			cout << "Unknown " << t << endl;
		}
	}
	return 0;
}