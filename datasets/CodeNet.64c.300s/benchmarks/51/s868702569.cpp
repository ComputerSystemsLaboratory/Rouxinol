#include <stdio.h>

long long nl[21];

long long nkai(int n){
	if(nl[n] != 0){
		return nl[n];
	}
	nl[n] = n * nkai(n - 1);
	return nl[n];
}

int main(void){
	int n = 0;
	for(int i=0; i<21; ++i){
		nl[i] = 0;
	}
	nl[0] = nl[1] = 1;

	scanf("%d", &n);
	printf("%lld\n", nkai(n));
	return 0;
}