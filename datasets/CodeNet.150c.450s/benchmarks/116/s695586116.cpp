#include <stdio.h>

int main(void){
	int i,n,k;
	
	while(scanf("%d%d",&n,&k),n,k){
		int max=0,temp=0;
		int val[100000]={0};
		
		for(i=0;i<n;i++){
			scanf("%d",&val[i]);
			temp+=val[i];
			if(i>=k)temp-=val[i-k];
			if(i>k-1 && temp>max)max=temp;
		}
		
		printf("%d\n",max);
		
	}
	return 0;
}