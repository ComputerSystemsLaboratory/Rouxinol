
#include <stdio.h>

int main()
{
	long int a,b,a1,b1;
	long int r;
	while(scanf("%ld %ld",&a1,&b1) != EOF){
		a = a1;
		b = b1;
		if(a < b){
			r = b;
			b = a;
			a = r;
		}
		if(a <= 0 || b <= 0){
			return 0;
		}
		r = a % b;
		while(r != 0){
			a = b;
			b = r;
			r = a % b;
		}
		printf("%ld %ld\n", b, a1 / b * b1);
	}
	return 0;
}