#include<stdio.h>

int main(){
	int n,x,ways,i,j,k;
	while(1){
		ways=0;
		scanf("%d %d",&n,&x);
		if((n==0)&&(x==0)){
			break;
		}
		for(i=1;i<=n;i++){
			for(j=2;j<=n;j++){
				for(k=3;k<=n;k++){
					if((i+j+k==x)&&(i!=j)&&(i!=k)&&(j!=k)&&(i<j)&&(j<k)){
						//printf("%d+%d+%d=%d\n",i,j,k,i+j+k);
						ways++;
						
					}
					
				}
				
			}
			
		}
		
		printf("%d\n",ways);
		
	}
	
	return 0;
	
}