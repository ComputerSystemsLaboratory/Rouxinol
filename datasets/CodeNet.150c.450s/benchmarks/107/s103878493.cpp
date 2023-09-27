#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
#include<unordered_map>
using namespace std;
#define int long long
const int inf = 999999999999999999;
typedef long long ll;
typedef long double ld;
string a, b;
int dp[1001][1001];
signed main() {
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < b.size(); j++)
			dp[i][j] = inf;
	for (int i = 0; i <= a.size(); i++)
		dp[i][0] = i;
	for (int i = 0; i <= b.size(); i++)
		dp[0][i] = i;
	for (int i = 1; i <= a.size(); i++) {
		for (int j = 1; j <= b.size(); j++) {
			int cost = 1;
			if (a[i-1] == b[j-1])
				cost = 0;
			dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost));
		}
	}
	cout << dp[a.size()][b.size()] << endl;
	getchar(); getchar();
}