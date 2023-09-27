#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "math.h"
#include "utility"
#include "string"
#include "map"
#include "unordered_map"
#include "iomanip"
#include "random"

using namespace std;
const long long int MOD = 1000000007;

int N;
int num[100];
long long int dp[100][21];

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	for (int i = 0; i < N; i++)cin >> num[i];
	dp[0][num[0]] = 1;
	for (int i = 1; i < N - 1; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j + num[i] <= 20)dp[i][j] += dp[i - 1][j + num[i]];
			if (j - num[i] >= 0)dp[i][j] += dp[i - 1][j - num[i]];
		}
	}
	cout << dp[N - 2][num[N - 1]] << endl;
	return 0;
}