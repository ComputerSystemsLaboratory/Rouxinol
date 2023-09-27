#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#define REP(i,n) for(int i=0;i<(n);++i)
#define SET(a,c) memset(a,c,sizeof(a))
#define PB push_back
using namespace std;

const int MAX_N = 1e6;
const int INF = 0x3f3f3f3f;

int dp[MAX_N], dp_odd[MAX_N];

void solve(int n)
{
	vector<int> m;

	SET(dp, INF);
	SET(dp_odd, INF);
	
	REP(i, MAX_N) {
		m.PB((i + 1) * (i + 2) * (i + 3) / 6);
		if (m.back() > MAX_N) break;
	}
	
	dp[0] = 0; dp_odd[0] = 0;
	REP(i, m.size()) {
		REP(j, n + 1) {
			if (j < m[i]) continue;
			dp[j] = min(dp[j], dp[j - m[i]] + 1);
			if (m[i] % 2) dp_odd[j] = min(dp_odd[j], dp_odd[j - m[i]] + 1);
		}
	}	
}

int main()
{
	int n;
	solve(MAX_N);
	while (1) {
		scanf("%d", &n);
		if (!n) break;
		printf("%d %d\n", dp[n], dp_odd[n]);
	}

	return 0;
}