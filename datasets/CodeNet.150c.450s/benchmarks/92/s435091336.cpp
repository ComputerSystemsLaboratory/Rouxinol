#include <cstdio>

int main(){
	long a, b;
	while( scanf(" %ld %ld", &a, &b) != EOF ){
		int count=0;
		long c = a+b;
		
		while(c!=0){
			c/=10;
			++count;
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}