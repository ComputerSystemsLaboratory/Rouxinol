#include <stdio.h>

int main (){
	long long int n, k;
	scanf("%lld %lld", &n, &k);
	long long int a[n];
	for(long long int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	for (long long int i = k; i < n;i++){
		if(a[i-k] < a[i]){
			puts("Yes");
		}else{
			puts("No");
		}
	}
	
	return 0;
}
