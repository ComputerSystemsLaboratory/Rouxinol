#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef long long ll;

ll dp[31];

int main(){
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= 30; ++i){
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	rep(i, 31){
		dp[i] = (dp[i] + 3649) / 3650;
	}
	while(1){
		int n;
		scanf("%d", &n);
		if(n == 0){
			break;
		}
		printf("%lld\n", dp[n]);
	}
	return 0;
}