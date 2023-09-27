#include<stdio.h>
int main(){
	int n,i,x;

	scanf("%d",&n);
	for(i=1;i<=n;i++){
		x = i;
		while(x!=0){
			if(i%3==0 || x%10==3){
				printf(" %d",i);
				break;
			}
			x=x/10;
		}
	}
	printf("\n");
	
	return 0;
}