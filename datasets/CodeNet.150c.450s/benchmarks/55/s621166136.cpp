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
	
	while(1) {
		string x;
		cin >> x;
		if(x[0] == '0') break;
		
		int sum = 0;
		REP(i, x.size()) {
			sum += (x[i] - '0');
		}
		cout << sum << "\n";
	}
	
	return 0;
}