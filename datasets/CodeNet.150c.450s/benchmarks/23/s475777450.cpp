#include <cstdio>

int dp[45];

int fibonacci(int n){
	if (n == 0 || n == 1){
		return 1;
	}
	if(dp[n] != 0){
		return dp[n];
	}
	else{
		return dp[n] = fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d\n", fibonacci(n));
	return 0;
}