#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define RFOR(i,b,n) for(int i=n-1;i>=b;i--)
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define NCLR(mat) memset(mat, -1, sizeof(mat))

using namespace std;

static const double EPS = 1e-9;
typedef long long ll;
typedef pair<int, int> paii;

int a, b, n;
bool con[100][100] = {0};

int solve()
{
	int dp[100][100];
	CLR(dp);
	dp[1][1] = 1;
	
	FOR(j, 1, b+1)
		FOR(i, 1, a+1)
		{
			if( con[j][i] == true )
			{
				dp[j][i] = 0;
			}
			else
			{
				dp[j][i] += dp[j-1][i] + dp[j][i-1];
			}
		}
	
	return dp[b][a];
}
	
int main()
{
	while(cin >> a >> b, (a||b))
	{
		CLR(con);
		cin >> n;
		
		FOR(i, 0, n)
		{
			int x, y;
			cin >> x >> y;
			con[y][x] = true;
		}
			
		cout << solve() << endl;
	}
	
	return 0;
}