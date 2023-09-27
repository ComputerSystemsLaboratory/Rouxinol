#include <cstdio>

int n, ans;
int coin[6] = {500,100,50,10,5,1};

int main(){
	while(scanf("%d", &n),n){
		ans = 0;
		n = 1000-n;
		for(int i = 0; i < 6; i++){ 
			ans += n/coin[i]; 
			n %= coin[i]; 
		}
		printf("%d\n", ans);
	}
}