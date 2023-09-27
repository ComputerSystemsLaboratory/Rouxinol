#include<stdio.h>
long long int a,s,d[99][21],f,g,h,i,j;
int main(void)
{
	for(i=0;i<99;i++){
		for(j=0;j<=20;j++){
			d[i][j]=0;
		}
	}
	scanf("%ld",&a);
	for(i=1;i<=a;i++){
		scanf("%ld",&s);
		if(i==1){
			d[1][s]=1;
		}
		if(i>=a){
			break;
		}
		else{
		for(j=0;j<=20;j++){
			if(j+s<=20){
				f=j+s;
				d[i][f]+=d[i-1][j];
			}
			if(j-s>=0){
				g=j-s;
				d[i][g]+=d[i-1][j];
			}
		}
		}
	}
	/*for(i=0;i<a;i++){
		for(j=0;j<=20;j++){
			printf("%ld ",d[i][j]);
		}
		printf("\n");
	}*/
	printf("%ld\n",d[a-1][s]);
	return 0;
}