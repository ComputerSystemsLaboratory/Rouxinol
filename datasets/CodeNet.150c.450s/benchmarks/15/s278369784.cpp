#include<iostream>
#include <climits>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<ll> S(n);
	REP(i, n) cin >> S[i];
	sort(S.begin(), S.end());
	int q;
	cin >> q;
	vector<ll> T(q);
	REP(i, q) cin >> T[i];
	int res = 0;
	REP(i, q) {
		if (binary_search(S.begin(), S.end(), T[i])) res++;
	}
	cout << res << "\n";

	return 0;
}
