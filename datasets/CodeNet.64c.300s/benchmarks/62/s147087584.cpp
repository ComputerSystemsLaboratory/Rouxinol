#include <stdio.h>

int main(void){

	int n,m;
	int i,j,k;
	int ans=0;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	int a[n][m];
	int b[m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			ans=ans+a[i][j]*b[j];
		}
		printf("%d\n",ans);
		ans=0;
	}
	
	return 0;
}