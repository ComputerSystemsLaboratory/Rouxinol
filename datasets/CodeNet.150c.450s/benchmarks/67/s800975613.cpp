#include <stdio.h>
int main(){
	long long n;
	for(;~scanf("%lld",&n)&&n;){
		long long r=0;
		int i=2;
		for(;;i++){
			long long x=n-(long long)i*(i-1)/2;
			if(x<i)break;
			if(x%i==0)r++;
		}
		printf("%lld\n",r);
	}
	return 0;
}