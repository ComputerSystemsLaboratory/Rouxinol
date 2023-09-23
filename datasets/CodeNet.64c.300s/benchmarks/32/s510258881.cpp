#include<stdio.h>

int main(){
	int n,i,tmp;
	long long sum=0,max=-1000000,min=1000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		if(max<tmp) max=tmp;
		if(min>tmp) min=tmp;
		sum+=tmp;
	}
	printf("%lld %lld %lld\n",min,max,sum);
	return 0;
}
