#include <stdio.h>
#include <math.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int n,m,l,a[100][100]={0},b[100][100]={0};
	long long c[100][100]={0};

	scanf("%d %d %d",&n,&m,&l);
	rep(i,0,n){
		rep(j,0,m){
			scanf("%d",&a[i][j]);
		}
	}
	rep(i,0,m){
		rep(j,0,l){
			scanf("%d",&b[i][j]);
		}
	}
	rep(i,0,n){
		rep(j,0,l){
			rep(k,0,m){
				c[i][j]+=a[i][k]*b[k][j];
			}
			printf("%lld",c[i][j]);
			if(j!=l-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}