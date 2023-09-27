#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int>    VI;
typedef vector<bool>   VB;
typedef vector<string> VS;

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int m;
VI ans;
string s;

int main(void) {
	cin >> m;
	rep (i, m) {
		string s;
		cin >> s;
		VS ans;
		REP (j, 1, s.size()) {
			string s1 = s.substr(0, j);
			string s2 = s.substr(j);
			ans.PB(s1 + s2);
			ans.PB(s2 + s1);
			string rs1 = s1, rs2 = s2;
			reverse(ALL(rs1));
			reverse(ALL(rs2));
			ans.PB(rs1 + s2);
			ans.PB(s2 + rs1);
			ans.PB(rs2 + s1);
			ans.PB(s1 + rs2);
			ans.PB(rs1 + rs2);
			ans.PB(rs2 + rs1);
		}
		set<string> temp(ALL(ans));
		ans = VS(ALL(temp));
		cout << ans.size() << endl;
	}
    return 0;
}