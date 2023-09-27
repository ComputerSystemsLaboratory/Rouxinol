#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <numeric>
#include <queue>
#include <sstream>
#include <string>
#include <string.h>
#include <vector>

#define REP(i,x) for(int i{ 0 }; i < (int)(x); i++)
#define SZ(x) ((int)(x).size())

using namespace std;

typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
template<class T> inline bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const int inf = 1 << 30;

string s, t;

int main()
{
	cin >> s >> t;

	VVi dp(SZ(s) + 1, Vi(SZ(t) + 1, inf));
	dp[0][0] = 0;

	for (int i = -1; i < SZ(s); ++i)
		for (int j = -1; j < SZ(t); ++j)
		{
			if (!(~i) && !(~j))
				continue;

			if (!(i & (1 << 31)) && !(j & (1 << 31)))
			{
				if (s[i] == t[j])
					chmin(dp[i + 1][j + 1], dp[i][j]);
				else
					chmin(dp[i + 1][j + 1], dp[i][j] + 1);
			}

			if (i >= 0)
				chmin(dp[i + 1][j + 1], dp[i][j + 1] + 1);
			if (j >= 0)
				chmin(dp[i + 1][j + 1], dp[i + 1][j] + 1);

		}

	cout << dp[SZ(s)][SZ(t)] << endl;
}
