#include <stdio.h>

int main(){
	int a, b, as, bs, n;
	scanf("%d", &n);
	while(n != 0){
		as = 0;
		bs = 0;
		for(int i = 0; i < n; i++){
			scanf("%d %d", &a, &b);
			if(a > b){
				as += a + b;
			}else if(a < b){
				bs += a + b;
			}else{
				as += a;
				bs += b;
			}
		}
		printf("%d %d\n", as, bs);
		scanf("%d", &n);
	}
	return 0;
}