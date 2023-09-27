#include <cstdio>

int n,k,a;
long long dp[100001];

int main(){
	while(scanf("%d%d",&n,&k), n != 0){
		for(int i = 0; i <= n; i++) dp[i] = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d",&a);
			dp[i] = dp[i-1] + a;
		}
		long long mx = 0;
		for(int i = 0; i <= n - k; i++){
			long long sum = dp[i+k] - dp[i];
			if(sum > mx){
				mx = sum;
			}
		}
		printf("%lld\n",mx);
	}
	return 0;
}