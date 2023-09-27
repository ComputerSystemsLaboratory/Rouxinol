#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;
 
typedef ostringstream OSS;
typedef istringstream ISS;
 
typedef vector<int> VI;
typedef vector< VI > VVI;
 
typedef long long LL;
 
typedef pair<int, int> PII;
typedef vector<PII> VPII;
 
#define X first
#define Y second
 
int main(void) {
	int N;
	cin >> N;
	VI xs(N);
	for (auto &x : xs) cin >> x;

	vector<vector<LL>> dp(N + 1, vector<LL>(21, 0));
	dp[1][xs[0]] = 1;

	for (int i = 1; i <= N - 2; i++) {
		for (int j = 0; j <= 20; j++) {
			if (!dp[i][j]) continue;

			VI ns({ j - xs[i], j + xs[i] });

			for (int k = 0; k < 2; k++) {
				if (ns[k] < 0 || 20 < ns[k]) continue;
				dp[i + 1][ns[k]] += dp[i][j];	
			}
		}
	}

	cout << dp[N - 1][xs[N - 1]] << endl;
}