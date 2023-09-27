#include <stdio.h>
int main(void)
{
	int i,n,box[10001],temp,max,min;
	long long sum;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&box[i]);
	}
	sum = 0;
	max=min=box[0];
	for(i=0;i<n;i++){
		if(box[i]>max)
			max=box[i];
		if(box[i]<min)
			min=box[i];
		sum += box[i];
	}
		
printf("%d %d %lld\n",min,max,sum);
	return 0;
}
