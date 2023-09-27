#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<functional>
#include<queue>
#include<math.h>
#define INF 999999

using namespace std;

int memo[50];

int fib(int n)
{
	memo[0] = 1;
	memo[1] = 1;

	if (n == 0)return 1;
	else if (n == 1)return 1;
	else {
		for (int i = 2; i <= n; i++) {
			memo[i] = memo[i - 1] + memo[i - 2];
		}
		return memo[n];
	}
}

int main()
{
	int n;
	cin >> n;

	int ans = fib(n);
	cout << ans << endl;

	return 0;
}