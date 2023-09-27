#include<stdio.h>
int main(void)
{
	int a,i;
	long long int b[10000],max,min,sum;
	sum=0;
	max=-10000000;
	min=10000000;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%lld",&b[i]);
		}
	for(i=0;i<a;i++){
		sum=sum+b[i];
		}
	for(i=0;i<a;i++){
		if(max<b[i]){
			max=b[i]; 
		}
	}
	for(i=0;i<a;i++){
		if(min>b[i]){
			min=b[i];
		}
	}
	printf("%lld %lld %lld\n",min,max,sum);
	return 0;
}