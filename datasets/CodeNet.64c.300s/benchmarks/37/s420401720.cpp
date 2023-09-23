#include <stdio.h>
int sum(int N);

int main(void)
{
	int N;
	
	scanf("%d", &N);

	while(N != 0){
		printf("%d\n", sum(N));
		scanf("%d", &N);
	}
	return 0;
}

int sum(int N)
{
	int count;
	int i, k;
	int s;
	count = 0;
	
	for(i = 1; i < N; i++) {
		s = 0;
		for(k = i; k <= N; k++) {
			s = s + k;
			
			if(s == N) {
				count++;
			}
				
			if(s > N) {
				break;
			}
		}
	}
	
	return count;
}