#include<stdio.h>
int main(void)
{
	int n,i,max,min;
	long long int sum;
	int a[10001];

	scanf("%d",&n);
	max=-1000000;
	min=1000000;	
	sum=0;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
		sum=sum+a[i];
	}
	printf("%d %d %lld\n",min,max,sum);
	return 0;
}
	