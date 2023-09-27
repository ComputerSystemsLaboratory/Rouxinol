#include<stdio.h>

int main(void)
{
	int n,m,i,t;
	
	scanf("%d %d",&n,&m);
	
	int A[200][2000],B[2000],C[2000]={0};
	
	for(i=0;i<n;i++){
		for(t=0;t<m;t++){
			
			scanf("%d",&A[i][t]);
			
		}
	}
	for(i=0;i<m;i++){
		
		scanf("%d",&B[i]);
		
	}
	for(i=0;i<n;i++){
		for(t=0;t<m;t++){
			
			C[i]=C[i]+A[i][t]*B[t];
			
		}
		printf("%d\n",C[i]);
	}
	return 0;
}
	