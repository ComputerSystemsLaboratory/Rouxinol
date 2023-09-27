#include<cstdio>
int F[45];
int n;
int fibonacci(int n){
	if(n == 0 || n == 1){
		return F[n] = 1;
	}
	if(F[n] != 0){
		return F[n];
	}
	return F[n] = fibonacci(n-2) + fibonacci(n-1);
}

int main(){
	int i;
	for(i=0;i<45;i++){
		F[i] = 0;
	}
	scanf("%d",&n);
	printf("%d\n",fibonacci(n));
	return 0;
}