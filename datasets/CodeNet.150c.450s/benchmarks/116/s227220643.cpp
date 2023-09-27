#include <cstdio>

int main(){
	int a[100001], n, k, max;
	while(scanf("%d %d", &n, &k), n || k){
		max = 0;
		for(int i = 0;i < n;i++)scanf("%d", &a[i]);
		for(int i = 0;i < k;i++)max += a[i];
		for(int i = 1;i < n-k+1;i++){
			int s = 0;
			for(int j = i;j < i+k;j++)s += a[j];
			if(s > max)max = s;
		}
		printf("%d\n", max);
		}
	return 0;
}