#include<stdio.h>

int main(void)
{
	int r,c,a[110][110],i,t,S;
	
	scanf("%d %d",&r,&c);
	
	for(i=0;i<r;i++){
		
		for(t=0;t<c;t++){
			
			scanf("%d",&a[i][t]);
			
		}
	}
	
	for(i=0;i<r;i++){
		
		S=0;
		
		for(t=0;t<c;t++){
			
			S=S+a[i][t];
		}
		
		for(t=0;t<c+1;t++){
			
			if(t!=c){
				
				printf("%d ",a[i][t]);
			}
			
			else printf("%d\n",a[i][t]=S);
		}
	}
	
	for(t=0;t<c;t++){
		
		S=0;
		
		for(i=0;i<r;i++){
			
			S=S+a[i][t];
		}
		printf("%d ",S);
	}
	S=0;
	for(i=0;i<r;i++){
		
		S=S+a[i][c];
	}
	printf("%d\n",S);
	
	return 0;
}