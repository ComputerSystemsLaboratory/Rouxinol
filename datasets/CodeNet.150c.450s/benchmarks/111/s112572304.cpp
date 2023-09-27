#include<cstdio>
#include <iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<list>
#include<set>
#include<numeric>

#define MOD 1000000007

using namespace std;
typedef long long ll;

ll A[110];
ll dp[110][21];

int main()
{
	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	
	dp[0][A[0]] = 1;
	for (int i = 1; i < N - 1; i++) {
		for (int j = 0; j <= 20; j++) {
			if (dp[i - 1][j] == 0) continue;
			if (j - A[i] >= 0)dp[i][j - A[i]] += dp[i - 1][j];
			if (j + A[i] <= 20)dp[i][j + A[i]] += dp[i - 1][j];
		}
	}
	cout << dp[N - 2][A[N - 1]] << endl;
	return 0;
}