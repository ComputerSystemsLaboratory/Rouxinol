#include "bits/stdc++.h"
#pragma comment (linker, "/STACK:526000000")
#define  _CRT_SECURE_NO_WARNINGS

using namespace std;
typedef string::const_iterator State;
#define eps 1e-11L
#define MAX_MOD 1000000007LL
#define GYAKU 500000004LL

#define MOD 998244353LL
#define seg_size 262144*2LL
#define pb push_back
#define mp make_pair
typedef long long ll;
#define REP(a,b) for(long long (a) = 0;(a) < (b);++(a))
#define ALL(x) (x).begin(),(x).end()

void init() {
	iostream::sync_with_stdio(false);
	cout << fixed << setprecision(20);
}

void solve(){
	int n;
	cin >> n;
	set<string> hoge;
	REP(i, n) {
		string a;
		cin >> a;
		hoge.insert(a);
	}
	int m;
	cin >> m;
	int now = 0;
	REP(i, m) {
		string s;
		cin >> s;
		if (hoge.count(s) == 0) {
			cout << "Unknown ";
		}
		else {
			now++;
			if (now % 2 == 1) {
				cout << "Opened by ";
			}
			else {
				cout << "Closed by ";
			}
		}
		cout << s << endl;
	}
}

#undef int
int main() {
	init();
	solve();
}
