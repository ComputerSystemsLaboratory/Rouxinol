#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

ll num, dp[128][21]; //dp[i][j] : i個の項を使った時の計算結果j
ll T[101];
ll ans;

int main()
{
	int dx[] = {1, -1};
	cin >> num;
	for(int i = 1; i < num; i++)
	{
		cin >> T[i];
	}
	cin >> ans;

	dp[1][T[1]] = 1;

	for(int i = 1; i < num; i++)
	{
		for(int j = 0; j < 21; j++)
		{
			if(dp[i][j] == 0)
			{
				continue;
			}
			for(int k = 0; k <= 1; k++)
			{
				int r = j + T[i+1]*dx[k];

				if(r >= 0 && r <= 20)
				{
					dp[i+1][r] += dp[i][j];
				}
			}
		}
	}


	cout << dp[num-1][ans] << endl;
	return 0;
}