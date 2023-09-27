#include<stdio.h>

int main()
{
	int n=1,x=1,i,t,N=0;
	
	for(;n!=0||x!=0;){
		N=0;
		scanf("%d %d",&n,&x);
		
		for(i=1;i<n;i++){
			
			for(t=i+1;t<n;t++){
				
				if(x-i-t>=t+1&&x-i-t<=n){
					
					//printf("%d %d\n\n",i,t);
					
					N++;
					
				}
			}
		}
		if(n!=0||x!=0){
			
			printf("%d\n",N);
		}
	}
	return 0;
}