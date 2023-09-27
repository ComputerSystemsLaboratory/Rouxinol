#include <stdio.h>


int main(void){

	int n,m,l;
	int i,j,k;
	
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&l);
	
	long int a[n][m];
	long int b[m][l];
	long int c[n][l];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%ld",&a[i][j]);
		}
	}
	
	for(j=0;j<m;j++){
		for(k=0;k<l;k++){
			scanf("%ld",&b[j][k]);
		}
	}
	
	for(i=0;i<n;i++){
		for(k=0;k<l;k++){
			c[i][k]=0;
			for(j=0;j<m;j++){
				c[i][k]=c[i][k]+a[i][j]*b[j][k];
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(k=0;k<l-1;k++){
			printf("%ld ",c[i][k]);
		}
		printf("%ld\n",c[i][l-1]);
	}
	
	return 0;
}