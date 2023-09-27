
#include<stdio.h>
int main(){
	int n,m,l,x,y,z,a[100][100],b[100][100];
	long long int c[100][100]={0};
	scanf("%d %d %d",&n,&m,&l);
	for(y=0;y<n;y++){
		for(x=0;x<m;x++){
			scanf("%d",&a[y][x]);
		}
	}
	for(y=0;y<m;y++){
		for(x=0;x<l;x++){
			scanf("%d",&b[y][x]);
		}
	}
	for(y=0;y<n;y++){
		for(x=0;x<l;x++){
			for(z=0;z<m;z++){
				c[y][x]=c[y][x]+(a[y][z]*b[z][x]);
			}
		}
	}
	for(y=0;y<n;y++){
		for(x=0;x<l;x++){
			if(x!=(l-1)){
				printf("%lld ",c[y][x]);
			}
			else{
				printf("%lld",c[y][x]);
			}
		}
		printf("\n");
	}
}

