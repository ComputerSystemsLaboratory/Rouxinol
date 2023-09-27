#include<stdio.h>
#define V 100
int main(){
	int i,j,k;
	int n,m,l;
	int a[V][V],b[V][V];
	long int c[V][V];
	
	scanf("%d %d %d",&n,&m,&l);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j]=0;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			b[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			c[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			for(k=0;k<m;k++){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			if(j==0){
			printf("%li",c[i][j]);
			}else{
				printf("% li",c[i][j]);
			}
		}
		printf("\n");
	}

}
	