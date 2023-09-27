#include<stdio.h>
#define M 100+1
int main(){
	int r,c;
	int i,j;
	int yoko=0;
	int tate=0;
	int a[M][M];
	
	scanf("%d %d",&r,&c);
	
	for(i=0;i<M;i++){
		for(j=0;j<M;j++){
			a[i][j] = 0;
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d ",&a[i][j]);
			yoko += a[i][j];
		}
		a[i][c] = yoko;
		yoko = 0;
	}
	
	for(j=0;j<c+1;j++){
		for(i=0;i<r;i++){
			tate += a[i][j];
		}
		a[r][j] = tate;
		tate = 0;
	}
	
	for(i=0;i<r+1;i++){
		for(j=0;j<c+1;j++){
			if(j==0){
				printf("%d",a[i][j]);
			}else{
				printf(" %d",a[i][j]);
			}
		}
		printf("\n");
	}
}