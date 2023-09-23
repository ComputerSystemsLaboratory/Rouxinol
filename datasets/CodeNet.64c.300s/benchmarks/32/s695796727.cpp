#include <stdio.h>
#include <limits.h>

int main(){
	int n, a;
	long long sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;

	scanf("%d", &n);
	
	for(; n>0; n--){
		scanf("%d ", &a);
		sum += a;
		if(a < min){
			min = a;
		}
		if(a > max){
			max = a;
		}
	}

	printf("%d %d %lld\n", min, max, sum);
}