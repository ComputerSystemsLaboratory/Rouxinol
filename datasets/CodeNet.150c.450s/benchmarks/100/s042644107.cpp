#include<stdio.h>

int step(int s,long long a){
	if(s==0)return a;
	return step(s-1,a*s);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld\n",step(n,1));
	return 0;
}