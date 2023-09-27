#include <stdio.h>

int main(){
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	long long int input[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &input[i]);
	}
	
	for(int i = 0; i < n-k; i++){
		if(input[i] < input[i+k]){
			puts("Yes");
		} else {
			puts("No");
		}
	}
	return 0;
}

