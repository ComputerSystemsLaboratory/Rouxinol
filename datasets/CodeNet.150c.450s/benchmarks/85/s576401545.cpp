#include <cstdio>
#include <cstring>
#include <climits>
#include <algorithm>

using namespace std;

int r[100], c[100];
int dp[100][100];

int optMat(int left, int right)
{
	if (dp[left][right] >= 0){
		return (dp[left][right]);
	}
	if (left == right){
		return (0);
	}
	
	int res = INT_MAX;
	for (int i = left; i < right; i++){
		res = min(res, optMat(left, i) + optMat(i + 1, right) + r[left] * c[i] * c[right]);
	}
	
	return (dp[left][right] = res);
}

int main()
{
	int N;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++){
		scanf("%d %d", &r[i], &c[i]);
	}
	
	memset(dp, -1, sizeof(dp));
	
	printf("%d\n", optMat(0, N - 1));
	
	return (0);
}