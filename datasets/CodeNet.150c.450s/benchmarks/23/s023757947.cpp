#include<cstdio>
int F[46];
int fib(int flag){
	if(flag<2){
		return 1;
	}else if(F[flag]){
		return F[flag];
	}else{
		return F[flag]=fib(flag-1)+fib(flag-2);
	}
}
int main(){
	int num;
	scanf("%d", &num);
	printf("%d\n", fib(num));
	return 0;
}
