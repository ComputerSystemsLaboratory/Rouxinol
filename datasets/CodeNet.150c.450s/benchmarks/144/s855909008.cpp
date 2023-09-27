#include<stdio.h>
int main(void)
{
	int n,m,l,array1[100][100],array2[100][100],i,j,k;
	long long int a=0;
	scanf("%d %d %d",&n,&m,&l);
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			scanf("%d",&array1[k][i]);
		}
	}
	for(k=0;k<m;k++){
		for(j=0;j<l;j++){
			scanf("%d",&array2[j][k]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				a+=array1[k][i]*array2[j][k];
			}
			if(j!=l-1){
				printf("%lld ",a);
				a=0;
			}else{
				printf("%lld",a);
				a=0;
			}
		}
		printf("\n");
	}	
	return 0;
}