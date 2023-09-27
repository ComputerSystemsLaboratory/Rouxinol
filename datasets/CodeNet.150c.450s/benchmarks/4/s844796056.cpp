#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int m, f, r;
	while(1) {
		cin >> m >> f >> r;
		if(m == -1 && f == -1 && r == -1) break;
		
		string ans;
		if(30 <= m + f) ans = "D";
		if(50 <= m + f || 50 <= r) ans = "C";
		if(65 <= m + f) ans = "B";
		if(80 <= m + f) ans = "A";
		if(m == -1 || f == -1 || m + f < 30) ans = "F";
		
		cout << ans << "\n";	
	}
	return 0;
}