#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <map>
using namespace std;
 
#define REP(i, s, e) for (int i = (s); i < (e); i++)
#define REPI(i, s, e) for (int i = (s); i <= (e); i++)
#define rep(i, n) REP(i, 0, n)
#define repi(i, n) REPI(i, 0, n)
#define ALL(v) (v).begin(), (v).end()
 
#define dump(x) (cout << #x << " = " << x << endl)
#define dump2(x, y) (cout << "(" << #x << ", " << #y << ") = (" << x << ", " << y << ")" << endl)
#define dump3(x, y, z) (cout << "(" << #x << ", " << #y << ", " << #z << ") = (" << x << ", " << y << ", "<< z << ")" << endl)
 
typedef long long ll;
typedef pair<int, int> pii;


int main(void)
{
	int n;
	while (cin >> n, n) {
		vector< pair<string, string> > vs;

		rep(i, n) {
			string a, b;
			cin >> a >> b;
			vs.push_back(make_pair(a, "START"));
			vs.push_back(make_pair(b, "END"));
		}
		sort(ALL(vs));

		int ans = 0, cnt = 0;
		rep(i, vs.size()) {
			if (vs[i].second == "START")
				cnt++;
			else
				cnt--;
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}
    return 0;
}