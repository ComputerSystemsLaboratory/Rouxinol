#include <iostream>
#include <cstdio>
using namespace std;

long func(long x){
	return x*x;
}

int main(){
	int d;
	while ( scanf(" %d", &d) != EOF ){
		long area=0;
		for(int i=0; i<600/d; ++i)
			area += d*func(i*d);
	
		printf("%ld\n", area);
	}

	return 0;
}