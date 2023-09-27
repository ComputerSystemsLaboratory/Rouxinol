#include <cstdio>

using namespace std;

int main(){
	int n,m,l,i,j,k,a[101][101],b[101][101];
long long int c;

	scanf("%d%d%d",&n,&m,&l);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++) scanf("%d",&a[i][j]);
	}
	for(i=0; i<m; i++){
		for(j=0; j<l; j++) scanf("%d",&b[i][j]);
	}

	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			c=0;
			for(k=0; k<m; k++){
				c+=a[i][k]*b[k][j];
			}
			printf("%lld",c);
			if(j<l-1) printf(" ");
			else printf("\n");
		}
	}

	return 0;
}