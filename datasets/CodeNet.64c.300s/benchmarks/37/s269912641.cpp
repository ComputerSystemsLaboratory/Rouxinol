#include<stdio.h>

int main(void)
{
	int N=1,i,t,n=0,M;
	
	for(;N!=0;){
		
		n=0;
		scanf("%d",&N);
		
		for(i=1;i<(N/2)+1;i++){
			M=N;
			for(t=i;t<(N/2)+2;t++){
				
				M=M-t;
				//printf("%d %d %d\n",i,t,M);
				if(M<=0){
					
					if(M==0){
						
						n=n+1;
						break;
					}
					if(M<0){
						break;
					}
				}
				//printf("%d\n\n",n);
			}
			//printf("%d\n\n",n);
		}
		
		if(N!=0){
			printf("%d\n",n);
		}
	}
	return 0;
}