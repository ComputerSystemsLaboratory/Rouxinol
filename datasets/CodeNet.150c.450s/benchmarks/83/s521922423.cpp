#include<stdio.h>
int i,j,a,b,c[1001],d[1001],e[1001][100000],f=-1;
int main(void)
{
	scanf("%d %d",&a,&b);
	for(i=0;i<=a;i++){
		for(j=0;j<=b;j++){
			e[i][j]=-1;
		}
	}
	for(i=0;i<a;i++){
		scanf("%d %d",&c[i],&d[i]);
	}
	e[0][0]=0;
	for(i=0;i<a;i++){
		for(j=0;j<=b;j++){
			if(e[i][j]!=-1){
			if(e[i][j]+c[i]>e[i+1][j+d[i]] && j+d[i]<=b){
				e[i+1][j+d[i]]=e[i][j]+c[i];
			}
			if(e[i][j]>e[i+1][j]){
				e[i+1][j]=e[i][j];
			}
			}
		}
	}
	for(i=0;i<=a;i++){
		for(j=0;j<=b;j++){
			if(f<e[i][j]){
				f=e[i][j];
			}
		}
	}
	printf("%d\n",f);
	return 0;
}