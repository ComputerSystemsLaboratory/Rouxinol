#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <string>
#include <cstdio>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cstring>
#include <tuple>

using namespace std;

typedef long long LL;
typedef vector<int> Array;
typedef pair<int, int> P;

const int INF = 1 << 29;
const LL MOD = 1000000009;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(c) (c).begin(), (c).end()

int dp[20][20];
int main()
{
	int a, b, n;
	while (cin >> a >> b && a)
	{
		memset(dp, 0, sizeof(dp));
		cin >> n;
		rep(i, n){ int x, y; cin >> x >> y; dp[x][y] = -INF; }
		dp[1][1] = 1;
		for (int x = 1; x <= a; x++)
		{
			for (int y = 1; y <= b; y++) if (dp[x][y] >= 0)
			{
				dp[x + 1][y] += dp[x][y];
				dp[x][y + 1] += dp[x][y];
			}
		}

		cout << dp[a][b] << endl;
	}
	return 0;
}