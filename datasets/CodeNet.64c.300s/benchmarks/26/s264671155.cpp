#include <stdio.h>

long long func(long long x,long long y){
	if(y == 0)return 1;
	else if(y % 2 == 0){
		return func(x*x%1000000007,y/2);
	}else{
		return x*func(x,y-1)%1000000007;
	}
}

int main(){
	int m,n;

	scanf("%d %d",&m,&n);

	printf("%lld\n",func(m,n)%1000000007);
}