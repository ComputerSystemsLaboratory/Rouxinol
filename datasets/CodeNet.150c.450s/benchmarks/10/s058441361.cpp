#include<stdio.h>
int main(void)
{
	int a,s,d,f,g,h,k[5][4][11],i,j;
	scanf("%d",&a);
	for(i=1;i<=3;i++){
		for(j=1;j<=10;j++){
			k[1][i][j]=0;
			k[2][i][j]=0;
			k[3][i][j]=0;
			k[4][i][j]=0;
		}
	}
	for(i=1;i<=a;i++){
		scanf("%d %d %d %d",&s,&d,&f,&g);
		k[s][d][f]+=g;
	}
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			for(h=1;h<=10;h++){
				printf(" %d",k[i][j][h]);
			}
			printf("\n");
		}
		if(i!=4){
		for(j=1;j<=20;j++)
			printf("#");
		printf("\n");
		}
	}
	return 0;
}