#include<stdio.h>
int main(void)
{
	long long int i,j,a=0,b,c[100],d[1001][21];
	scanf("%lld",&b);
	for(i=0;i<b;i++){
		scanf("%lld",&c[i]);
	}

	for(i=0;i<21;i++){
		for(j=0;j<=1000;j++){
			d[j][i]=0;
		}
	}
	d[0][c[0]]=1;
	for(i=0;i<b-2;i++){
		for(j=0;j<=20;j++){
			if(j+c[i+1]<=20){
				d[i+1][j+c[i+1]]=d[i][j]+d[i+1][j+c[i+1]];
			}
			if(j-c[i+1]>=0){
				d[i+1][j-c[i+1]]=d[i][j]+d[i+1][j-c[i+1]];
			}
		}
	}
	printf("%lld\n",d[b-2][c[b-1]]);
	return 0;
}