#include<stdio.h>
int main(void){
	int a[100][100],b[100][100];
	long long int c=0;
	int i,t,r,n,m,j;
	scanf("%d %d %d",&n,&m,&j);
	for(i=0;i<n;i++){
		for(t=0;t<m;t++){
			scanf("%d",&a[t][i]);
			
		}
		
	}
	for(t=0;t<m;t++){
		for(r=0;r<j;r++){
			scanf("%d",&b[r][t]);
		}
		
	}
	for(i=0;i<n;i++){
		for(t=0;t<j;t++){
			for(r=0;r<m;r++){
				c+=a[r][i]*b[t][r];
			}
			if(t!=j-1){
				printf("%lld ",c);
				c=0;
			}else{
				printf("%lld",c);
				c=0;
		}
	}
		printf("\n");
	}
	
	return 0;
}