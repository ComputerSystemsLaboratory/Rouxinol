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

using namespace std;

const int INF = 1 << 29;
typedef pair<int, int> P;

int n;

int main(void)
{
	while(cin >> n && n)
	{
		long long dp[101][21] = {0};
		vector<int> input; input.resize(n);
		for(int i = 0; i < n; i++) cin >> input[i];
		dp[0][input[0]] = 1;
		for (int i = 0; i < n - 2; i++)
		{
			for (int j = 0; j <= 20; j++)
			{
				if(!dp[i][j]) continue;
				if(j + input[i + 1] <= 20) dp[i + 1][j + input[i + 1]] += dp[i][j];
				if(j - input[i + 1] >= 0) dp[i + 1][j - input[i + 1]] += dp[i][j];
			}
		}
		cout << dp[n - 2][input[n - 1]] << endl;
	}
	return 0;
}