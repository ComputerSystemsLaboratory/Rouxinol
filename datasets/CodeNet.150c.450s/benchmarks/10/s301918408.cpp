#include <stdio.h>
int main()
{
	int n,b,f,r,v,a[3][10]={0},e[3][10]={0},c[3][10]={0},d[3][10]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&b,&f,&r,&v);
		switch(b){
		case 1:
			a[f-1][r-1]=a[f-1][r-1]+v;
			break;
		case 2:
			e[f-1][r-1]=e[f-1][r-1]+v;
			break;
		case 3:
			c[f-1][r-1]=c[f-1][r-1]+v;
			break;
		case 4:
			d[f-1][r-1]=d[f-1][r-1]+v;
			break;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("####################\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			printf(" %d",e[i][j]);
		}
		printf("\n");
	}
	printf("####################\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	printf("####################\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			printf(" %d",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}