#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>

using namespace std;
int n;

const int INF = 1 << 29;
typedef long long LL;
typedef pair<int, LL> P;
map<P, LL> dp;
vector<int> nums;
int ans = 0;

LL dfs(int m, LL v)
{
	if(v < 0LL || v > 20LL) return 0LL;
	if(dp[P(m, v)] > 0LL)
		return dp[P(m, v)];

	LL res = 0LL;
	if((n - 1) == m)
		res = v == nums[n - 1] ? 1LL : 0LL;
	else
		res = dfs(m + 1, v - (LL)nums[m]) + dfs(m + 1, v + (LL)nums[m]);

	return dp[P(m, v)] = res;
}

int main(void)
{
	while(cin >> n && n)
	{
		nums.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];
		}
		dp = map<P, LL>();
		cout << dfs(1, nums[0]) << endl;
	}
	return 0;
}