#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	string s;
	string p;
	cin >> s >> p;
	
	string t1, t2;
	REP(i, p.size()) t1 += s[i];
	for(int i = p.size(); i > 0; --i) t2 += s[s.size() - i];
	
	s = t2 + s + t1;
	
	if((int)s.find(p) == -1) cout << "No";
	else cout << "Yes";
	
	cout << "\n";
	
	return 0;
}