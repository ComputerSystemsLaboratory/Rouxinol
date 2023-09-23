#include <iostream>
#include <cstdio>

using namespace std;

void swap(long *a, long *b){
	long tmp= *a;
	*a = *b;
	*b = tmp;
}

long gcd(long x, long y){
	while(y!=0){	
		long r=x%y;
		x=y;
		y=r;	
	}
	return x;
}

long lcm(long x, long y){
	return (x*y/gcd(x,y));
}

int main(){
	long a, b;
	while( scanf(" %ld %ld", &a, &b) != EOF ){
		printf("%ld %ld\n", gcd(a,b), lcm(a,b));		
	}

	return 0;
}