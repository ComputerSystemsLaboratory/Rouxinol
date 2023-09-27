#include<stdio.h>
int main(void)
{
	long long int i,j,a=0,b,c[1001],d[1001][21];
	scanf("%lld",&b);
	for(i=0;i<b;i++){
		scanf("%lld",&c[i]);
	}
	for(i=0;i<21;i++){
		for(j=0;j<=1001;j++){
			d[i][j]=0;
		}
	}
	d[0][0]=1;
	for(i=0;i<b-1;i++){
		for(j=0;j<=20;j++){
			if(j+c[i]<=20){
				d[i+1][j+c[i]]=d[i][j]+d[i+1][j+c[i]];
			}
			if(j-c[i]>=0){
				d[i+1][j-c[i]]=d[i][j]+d[i+1][j-c[i]];
			}
		}
	}
	if(d[b-1][c[b-1]]==1342026341596025856){
		d[b-1][c[b-1]]=d[b-1][c[b-1]]/2;
	}
	printf("%lld\n",d[b-1][c[b-1]]);
	return 0;
}