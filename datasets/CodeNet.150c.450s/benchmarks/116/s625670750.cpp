#include<stdio.h>

int main(void){
	int i,n,k,sum,max;
	int N[150000];

	while(0==0){
		scanf("%d %d",&n,&k);
		sum=0;
		if(n==0 && k==0) break;

		for(i=0;i<n;i++)
			scanf("%d",&N[i]);

		for(i=0;i<k;i++)
		    sum+=N[i];
		
		max=sum;

		for(i=k;i<n;i++){
			sum+=N[i];
			sum-=N[i-k];
			if(sum>max)max=sum;
		}

		printf("%d\n",max);
	}
	return 0;
}