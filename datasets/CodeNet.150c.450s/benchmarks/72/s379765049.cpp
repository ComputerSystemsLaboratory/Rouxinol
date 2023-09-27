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
	getline(cin, s);
	
	REP(i, s.size()) {
		if(islower(s[i])) transform(s.begin() + i, s.begin() + i + 1, s.begin() + i, ::toupper);
		else transform(s.begin() + i, s.begin() + i + 1, s.begin() + i, ::tolower);
	}
	
	cout << s << "\n";
	
	return 0;
}