#include <cstdio>

int main(){
	int n;
	while(scanf("%d", &n),n){
		int ans = 1000000;
		for(int i = 0; i <= 100; i++){
			for(int j = 0; j <= 1000; j++){
				if(n-i*i*i-j*j >= 0){
					if(ans > i+j+n-i*i*i-j*j) ans = i+j+n-i*i*i-j*j;
				}
			}
		}
		printf("%d\n", ans);
	}
}