#include <cstdio>
#include <math.h>
using namespace std;


int main(){
	int n, max, p = 2;
	scanf("%d", &n);
	max = (int)sqrt(n) + 1;
	printf("%d:", n);
	while(p <= max) {
		if (n % p == 0) {
			n /= p;
			printf(" %d", p);
			continue;
		}
		p++;
	}
	if (n > 1) {
		printf(" %d", n);
	}
	printf("\n");

	return 0;
}