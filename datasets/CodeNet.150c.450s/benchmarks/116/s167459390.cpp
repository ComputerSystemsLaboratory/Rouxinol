#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<algorithm>
#define rep(i,a) for(int i=0;i<(a);++i)

int n, k;
int a[100001], sum[100001];

int main(){
	while (scanf("%d%d", &n, &k), n|k){
		rep(i, 100001)sum[i] = 0;
		scanf("%d", &a[0]);
		for (int i = 1; i < n; ++i){
			scanf("%d", &a[i]);
			sum[i] = sum[i - 1] + a[i];
		}
		int ans = 0;
		for (int i = 0; i < n - k; ++i){
			ans = std::max(ans, sum[i + k] - sum[i]);
		}
		printf("%d\n", ans);
	}
	return 0;
}