#include <stdio.h>

#define N 44

int F[N];
int n;

int  fib(int n){
	if(n==0 || n == 1)
		return 1;

	if(F[n] != 0) return F[n];

	return F[n] = fib(n-1) + fib(n-2);
}

int main(){
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		F[i] = 0;
	}
	fib(n);
	printf("%d\n",fib(n));
}