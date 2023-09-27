#include <cstdio>

int n,k,ans,tmp;
int a[100000];

int main(){
	while(scanf("%d%d", &n, &k)){
		if(n == 0 && k == 0) break;
		ans = 0;
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < k; i++) ans += a[i];
		tmp = ans;
		for(int i = 0; i < n-k; i++){
			tmp += a[k+i]-a[i];
			if(ans < tmp) ans = tmp;
		}
		printf("%d\n", ans);
	}
}