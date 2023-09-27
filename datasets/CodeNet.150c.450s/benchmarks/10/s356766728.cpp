#include<stdio.h>

int main(void)
{
	int n,i,j;
	int b[240],f[240],r[240],v[240];
	int ittou[3][10]={0},nitou[3][10]={0},santou[3][10]={0},yonntou[3][10]={0};
	
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&b[i],&f[i],&r[i],&v[i]);
	}
	
	
	
	for(i=0;i<n;i++){
		if(b[i]==1){
			ittou[f[i]-1][r[i]-1]+=v[i];
		}
		else if(b[i]==2){
			nitou[f[i]-1][r[i]-1]+=v[i];
		}
		else if(b[i]==3){
			santou[f[i]-1][r[i]-1]+=v[i];
		}
		else if(b[i]==4){
			yonntou[f[i]-1][r[i]-1]+=v[i];
		}
	}
	
	
	
	for(i=0;i<3;i++){
		for(j=0;j<10;j++){
			printf(" %d",ittou[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<20;i++){
		printf("#");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<10;j++){
			printf(" %d",nitou[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<20;i++){
		printf("#");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<10;j++){
			printf(" %d",santou[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<20;i++){
		printf("#");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<10;j++){
			printf(" %d", yonntou[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}