#include<stdio.h>

int fun(long long a,int n){
	a=a/20*21;
	if(a%1000!=0){
		a=a/1000*1000+1000;
	}
	n--;
	if(n==0){
		return a;
	}
	else{
		return fun(a,n);
	}
}

signed main(){
	int n;
	long long a;
	scanf("%d",&n);
	a=fun(100000,n);
	printf("%d\n",a);
	return 0;
}