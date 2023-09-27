#include<stdio.h>
int n,k,i;
int sum[100000];
int a;
int main(void){
	while(1){
		scanf("%d %d",&n,&k);
		if(n==0 && k==0){
			break;
		}
		/*for(i=0;i<n;i++){
			sum[i]=0;
		}*/
		int temp=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			temp+=a;
			sum[i]=temp;
		}
		/*for(i=0;i<n;i++){
			printf("%d\n",sum[i]);
		}*/
		int max=0,j=0;
		for(i=k-1;i<n;i++){
			temp=sum[k-1];
			if(i!=k-1){
				temp=sum[i]-sum[j];
				j++;
			}
			if(max<temp){
				max=temp;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}