#include<stdio.h>
int a[100001];
int main(void)
{
	int n,k,sum,max=0,i,j;
	while(1){
		scanf("%d%d",&n,&k);
		if(n==0&&k==0) break;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n-k;i++){
			sum=0;
			if(i+k<=n){
				for(j=i;j<i+k;j++){
					sum+=a[j];
				}
				if(max<sum){
					max=sum;
				}
			}
		}
		printf("%d\n",max);
	}
	return 0;
}