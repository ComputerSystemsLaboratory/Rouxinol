#include<stdio.h>
int main(void)
{
	int array[11][4][5]={0};
	int i,j,k,m,a,b;
	scanf("%d",&a);
	for(b=0;b<a;b++){
		scanf("%d %d %d %d",&i,&j,&k,&m);
		array[k][j][i]+=m;
	}
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(k=1;k<11;k++){
				if(j==4&&i!=4){
					printf("##");
				}else if(j!=4){
					printf(" %d",array[k][j][i]);
				}
			}
			if(i==4&&j==4){
				break;
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}