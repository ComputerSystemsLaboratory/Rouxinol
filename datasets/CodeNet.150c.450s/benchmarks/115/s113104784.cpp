#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int LCS[1010][1010];

void solve(string x, string y)
{
	for (int i = 0; i != x.size(); i++)
	{
		for (int j = 0; j != y.size(); j++)
		{
			if (x[i] == y[j])
			{
				LCS[i + 1][j + 1] = LCS[i][j] + 1;
			}
			else
			{
				LCS[i + 1][j + 1] = max(LCS[i][j + 1], LCS[i + 1][j]);
			}
		}
	}

	cout << LCS[x.size()][y.size()] << endl;
}

int main()
{
	int q;
	cin >> q;

	for (int i = 0; i < 1000; i++)
	{
		LCS[0][i] = 0;
		LCS[i][0] = 0;
	}

	for (int i = 0; i < q; i++)
	{
		string x, y;
		cin >> x >> y;
		solve(x, y);
	}
	return 0;
}
