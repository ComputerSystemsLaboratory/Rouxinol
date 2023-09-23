#include <cstdio>

long rec(int n){
	if(n==1){
		return n;
	}
	else{
		return n * rec(n-1);
	}
}

int main(){
 	int n;
	scanf("%d",&n);
	printf("%ld\n",rec(n));
	return 0;
}