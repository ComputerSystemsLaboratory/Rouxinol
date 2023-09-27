#include<stdio.h>
int main(void){
	int n,k,a[100000],i,j,sum,max;
	while(1){
		scanf("%d %d",&n,&k);
		if(n==0)break;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		max=-1;
		for(i=0;i<n;i++){
			sum=0;
			if(i+k<n){
				for(j=i;j<i+k;j++) sum+=a[j];
			}
			if(max<sum) max=sum;
		}
		printf("%d\n",max);
	}
	return 0;
}