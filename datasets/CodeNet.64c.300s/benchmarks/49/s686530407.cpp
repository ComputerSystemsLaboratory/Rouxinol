#include<cstdio>

int main(){
	int a, b, c;
	while(scanf("%d %d", &a, &b) + 1){
		c = 1;
		for(int i = 1;i <= 8 ; i++){
			c *= 10;
			if(c > a + b){
				printf("%d\n", i);
				i += 8;
			}
		}
	}
	return 0;
}