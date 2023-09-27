#include<cstdio>

int main(){
	int f[1000001] = {};
	int n;
	for(int i = 2; i <= 1000; i++){
		for(int j = 2; j * i <= 1000000; j++){
			f[i * j] = 1;
		}		
	}

	int sum;

	while(scanf("%d", &n) + 1){
		int sum = n - 1;
		for(int i = 2; i <= n; i++){
			sum -= f[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}