#include <stdio.h>

int main(void)
{
	int n,i,k;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%3==0){
			printf(" %d",i);
			continue;
		}
		else{
			int j=i;
			for(k=10000;k>=1;k/=10){
				if(j/k==3){
					printf(" %d",i);
					break;
				}
				j%=k;
			}
		}
	}
	printf("\n");
	return 0;
}