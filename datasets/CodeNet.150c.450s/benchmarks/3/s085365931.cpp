#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>



#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define INF 1000000001
#define MOD 1000000007

using namespace std;


int main() {
	string s;
	int q;
	cin >> s >> q;
	REP(i, q) {
		string qr;
		cin >> qr;
		if (qr == "print") {
			int a, b;
			cin >> a >> b;
			cout << s.substr(a, b-a+1) << endl;
		}
		else if (qr == "reverse") {
			int a, b;
			cin >> a >> b;
			string sr = s.substr(a, b - a + 1);
			FOR(i, a, b+1) {
				s[i] = sr[b - i];
			}
		}
		else {
			int a, b;
			string p;
			cin >> a >> b >> p;
			FOR(i, a, b + 1) {
				s[i] = p[i - a];
			}
		}
	}
	return 0;
}