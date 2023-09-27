#include <iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef long long ll;
#define mod 1000000
#define INF 10000000

int main() {
	int n, m;
	cin >> n >> m;
	vi C(m);
	for (int i = 0; i < m; i++) {
		cin >> C[i];
	}
	vi dp(2 * n+10, INF); dp[0] = 0;
	for (int i = 0; i < m; i++) {
		int c = C[i];
		for (int j = 0; j <=n; j++) {
			dp[j + c] = min(dp[j + c], 1 + dp[j]);
		}
		/*for (int j = 0; j <= n; j++) {
			cout << dp[j] << " ";
		}cout << endl;*/
	}
	cout << dp[n] << endl;
	return 0;
}