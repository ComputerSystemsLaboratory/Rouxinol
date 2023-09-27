#include <stdio.h>

int main(void){
	int t[100];
	int n = 0;
	int c = 0;

	for(int i=0;i<=9;++i){
		for(int j=0;j<=9;++j){
			t[i*10+j] = i+j;
		}
	}

	while(scanf("%d", &n) != EOF){
		c = 0;
		for(int i=0;i<100;++i){
			for(int j=0;j<100;++j){
				if(t[i]+t[j] == n){
					c++;
				}
			}
		}
		printf("%d\n", c);
	}
	return 0;
}