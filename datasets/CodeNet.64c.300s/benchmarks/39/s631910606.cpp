#include <stdio.h>

int main(void){
	int t[19];
	int n = 0;
	int c = 0;
	for(int i=0;i<19;++i){
		t[i] = 0;
	}
	for(int i=0;i<=9;++i){
		for(int j=0;j<=9;++j){
			t[i+j]++;
		}
	}

	while(scanf("%d", &n) != EOF){
		c = 0;
		for(int i=0;i<19&&i<=n; ++i){
			if(n - i > 18){ continue; }
			c += t[i] * t[n - i];
		}
		printf("%d\n", c);
	}
	return 0;
}