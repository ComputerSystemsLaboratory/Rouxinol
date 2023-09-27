#include <stdio.h>

int main() {

	long long int N;
	long long int K;
	scanf("%lld %lld", &N, &K);
	
	long long int arr[N];
	for(int i=0; i<N; i++){
		scanf("%lld", &arr[i]);
	}
	
	for(long long int i=0, j=K; j<N; i++, j++){
		if(arr[j]>arr[i]){
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}

    return 0;
}