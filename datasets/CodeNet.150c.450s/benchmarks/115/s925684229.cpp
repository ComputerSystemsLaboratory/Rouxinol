#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int INF = 1 << 28;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------

int dp[1001][1001];

int lcs(string x, string y)
{	
	int n = x.size();
	int m = y.size();

	x = " " + x;
	y = " " + y;

	for (int i = 1; i <= n; i++) dp[i][0] = 0;
	for (int j = 1; j <= m; j++) dp[0][j] = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			if (x[i] == y[j]){
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	return dp[n][m];
}

int main()
{
	int q;
	string s1, s2;
	cin >> q;

	for (int i = 0; i < q; i++) {		
		cin >> s1 >> s2;
		cout << lcs(s1, s2) << endl;
	}

	return 0;
}