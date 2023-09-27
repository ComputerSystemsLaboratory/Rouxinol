#include <stdio.h>
int main(){
	int N, K;
	scanf("%d %d", &N, &K);
	int ujian[N+1];
	for(int i =0; i<N; i++){
		scanf("%d", &ujian[i+1]);
	}
	for(int i= K+1; i<= N; i++)	{
		if(ujian[i] > ujian[i-K]){
			printf("Yes\n");
		}
		else printf("No\n");
	}
	return 0;
}