#include <stdio.h>

int main(){

	long int a, r=0;

	scanf("%ld",&a);

	r = a;

	for(int i=a-1; i>0; i--){
		r = r * i;
	}

	printf("%ld\n", r);
}