#include <cstdio>           // printf(), scanf()
#include <algorithm>        // fill(), lower_bound()

using namespace std;
static const int MAX_N = 100000;
static const int INF = 1000000000;

int A[MAX_N];
int dp[MAX_N];
int n;

int
lis()
{
	fill(dp, dp + n, INF);
	for (int i = 0; i < n; ++i)
		*lower_bound(dp, dp + n, A[i]) = A[i];

	return lower_bound(dp, dp + n, INF) - dp;
}

int
main(int argc, char** argv)
{
	int i;

	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", &A[i]);

	printf("%d\n", lis());
	return 0;
}