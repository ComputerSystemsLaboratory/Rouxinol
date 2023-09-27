#include <stdio.h>

int main(void)
{
	int N;
	int cnt = 0;
	
	while(1){
		scanf("%d", &N);
		if(N == 0) break;
		
		cnt = 0;
		for(int i = 2; i <= N; i++){
			if( (N*2) % i) continue;
			if( (N*2 / i + i) % 2 == 0) continue;
			
			if((double)N/i - i/2.0 > 0) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}