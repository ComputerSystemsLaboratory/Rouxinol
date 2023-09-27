
#include<cstdio>

using namespace std;
long long memo[35][110];
int N, ansnum;
int num[110] = { 0 };

long long solve(int sum, int depth,bool IsFirst) {
	if (sum<0 || sum>20)return 0;

	if (depth >= N - 1) {
		if (sum == ansnum)return 1;
		return 0;
	}

	if (memo[sum][depth] >= 0)return memo[sum][depth];

	if(IsFirst)return memo[sum][depth] = solve(sum + num[depth], depth + 1,false);
	return memo[sum][depth] = solve(sum + num[depth], depth + 1,false) + solve(sum - num[depth], depth + 1,false);
}

int main(void) {
	for (int i = 0; i<35; i++) {
		for (int j = 0; j<110; j++) {
			memo[i][j] = -1;
		}
	}
	scanf("%d", &N);
	for (int i = 0; i<N - 1; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &ansnum);

	printf("%lld\n", solve(0, 0,true));

	return 0;
}