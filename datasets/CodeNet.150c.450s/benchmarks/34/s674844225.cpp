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
#include <utility>
#include <unordered_set>

using namespace std;

typedef long long LL;
typedef vector<int> Array;
typedef pair<int, int> P;

const int INF = 1 << 29;
const LL MOD = 1000000009;
#define REP(i,n) for(int i=0;i<(int)n;++i)
#define ALL(c) (c).begin(), (c).end()

int main()
{
	int n;
	vector<int> dp(35);
	dp[0] = 1;
	REP(i, 30)REP(j, 3)dp[i + 1 + j] += dp[i];
	while (cin >> n && n)
	{
		cout << (dp[n] / 10 / 365 + 1) << endl;
	}
	return 0;
}