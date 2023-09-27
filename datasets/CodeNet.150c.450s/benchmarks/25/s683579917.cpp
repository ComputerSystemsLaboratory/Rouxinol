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
	
	string en = "abcdefghijklmnopqrstuvwxyz";
	int count[26] = {};
	string s;
	while(getline(cin, s)) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		REP(i, s.size()) count[s[i] - 'a']++;
	}
	
	REP(i, 26) {
		cout << en[i] << " : " << count[i] << "\n";
	}
	
	return 0;
}