#include<cstdio>
int main(){
	int l,m,n;
	long long int a[100][100],b[100][100],c[100][100];
	int i,j,k;
	scanf("%d %d %d",&l,&m,&n);
	for(i=0;i<l;i++){
		for(j=0;j<m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%lld",&b[i][j]);
		}
	}
	for(i=0;i<l;i++){
		for(j=0;j<n;j++){
			c[i][j] = 0;
			for(k=0;k<m;k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		printf("%lld",c[i][j]);
		if(j==n-1) printf("\n");
		else printf(" ");
		}
	}
	return 0;
}