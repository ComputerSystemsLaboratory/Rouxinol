#include <cstdio>

int main(void){
	int n;
	long a, max=-1000000, min=1000000, sum=0;

	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		scanf(" %ld", &a);
		if(a>max) max = a;
		if(a<min) min = a;
		sum+=a;
	}

	printf("%ld %ld %ld\n", min, max, sum);

	return 0;
}