#include<stdio.h>

int main(void)
{
	int n,N[4][3][10]={{0},{0},{0}},b,f,r,v,i,t,s;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d %d %d %d",&b,&f,&r,&v);
		
		N[b-1][f-1][r-1]=N[b-1][f-1][r-1]+v;
		
	}
	
	for(i=0;i<4;i++){
		for(t=0;t<3;t++){
			for(s=0;s<10;s++){
				printf(" %d",N[i][t][s]);
			}
			printf("\n");
		}
		for(t=0;t<20;t++){
			if(i!=3){
				printf("#");
			}
		}
		if(i!=3){
			printf("\n");
		}
	}
	return 0;
}