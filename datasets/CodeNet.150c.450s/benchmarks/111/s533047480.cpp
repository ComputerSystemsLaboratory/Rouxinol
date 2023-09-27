#include <cstdio>
using namespace std;

int n;
int a[100];
long long int dp[100][21];

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	dp[0][a[0]] = 1;
	for(int i=1; i<n-1; i++){
		for(int j=0; j<21; j++){
			for(int k=0; k<2; k++){
				int t = j + (k * 2 - 1) * a[i];
				if(0 <= t && t <= 20) dp[i][t] += dp[i-1][j];
			}
		}
	}
	
/*	for(int i=0; i<21; i++){
		for(int j=0; j<n; j++){
			printf("%lld  ", dp[j][i]);
		}
		printf("\n");
	}
*/
	printf("%lld\n", dp[n-2][a[n-1]]);
	return 0;
}