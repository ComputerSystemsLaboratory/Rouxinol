#include <stdio.h>

int main(void)
{
	int n,i;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%3==0){
			printf(" %d",i);
			continue;
		}
		else{
			int j=i;
			if(j/1000==3){
				printf(" %d",i);
				continue;
			}
			j%=1000;
			if(j/100==3){
				printf(" %d",i);
				continue;
			}
			j%=100;
			if(j/10==3){
				printf(" %d",i);
				continue;
			}
			j%=10;
			if(j==3){
				printf(" %d",i);
				continue;
			}
		}
	}
	printf("\n");
	return 0;
}