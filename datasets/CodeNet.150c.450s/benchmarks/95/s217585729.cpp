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


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	while (1){
		cin >> n;
		if (!n) break;
		bool ud = 0, r = 0, l = 0;
		int cnt = 0;
		REP(i,n) {
			string s;
			cin >> s;
			if (s == "ru") {
				r = 1;
				if (l & !ud) {
					cnt++;
					ud = 1;
				}
			}
			else if (s == "rd") {
				if (!l&ud) {
					cnt++;
					ud = 0;
				}
				r = 0;
			}
			else if (s == "lu") {
				if (r & !ud) {
					cnt++;
					ud = 1;
				}
				l = 1;
			}
			else {
				if (!r&ud) {
					cnt++;
					ud = 0;
				}
				l = 0;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}