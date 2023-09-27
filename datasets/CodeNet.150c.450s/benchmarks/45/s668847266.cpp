#include <stdio.h>
#include <string.h>
long long int d = 1000000007ll;

long long int pow(long long int m, long long int n){
	long long int res;
	if(n == 0) return 1;
	res = pow((m*m)%d, n/2);
	if(n % 2){
		res = (res*m)%d;
	}
	return res;
}

int main(void) {
	long long int n;
	int m;
	
	scanf("%d%lld", &m, &n);
	
	printf("%lld\n", pow(m, n));
	
	return 0;
}