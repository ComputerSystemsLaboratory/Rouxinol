#include<stdio.h>
int main(){
	int N;
	int K;
	scanf("%d %d", &N, &K);
	int total = 0;
	total = N - K;
	long long int A[N];
	for(int i = 0 ; i < N ; i++){
		scanf("%lld", &A[i]);
	}
	for(int i = 0 ; i < total ; i++){
		if(A[i] < A[i+K]){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}