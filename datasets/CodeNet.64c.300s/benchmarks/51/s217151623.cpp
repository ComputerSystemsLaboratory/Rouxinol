#include <cstdio>

long fact(int n){
	if(n==0) return 1;
	else return n*fact(n-1);
}

int main(){
	int a;
	scanf("%d", &a);
	printf("%ld\n", fact(a));
	return 0;
}