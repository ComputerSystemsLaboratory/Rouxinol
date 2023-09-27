#include<stdio.h>
int a,s,d[1000][1000],f,g,h,i,j;
int main(void)
{
	scanf("%d %d",&a,&s);
	for(i=0;i<a;i++){
		for(j=0;j<s;j++)
			scanf("%d",&d[i][j]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<s;j++)
			d[i][s]+=d[i][j];
			d[a][s]+=d[i][j];
	}
	for(i=0;i<s;i++){
		for(j=0;j<a;j++)
			d[a][i]+=d[j][i];	
	}
	for(i=0;i<=a;i++){
		for(j=0;j<=s;j++){
			printf("%d",d[i][j]);
			if(s!=j){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}