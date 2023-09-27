#include <stdio.h>

long kai(long i){
		if(i==1||i==0){
			return 1;
		}
		return i*kai(i-1);
	}
int main(){

	long n;
	scanf("%ld",&n);

	printf("%ld\n",kai(n));
	return 0;

}