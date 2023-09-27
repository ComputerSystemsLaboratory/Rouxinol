#include<stdio.h>
int main(){
	int room[5][4][11]={0},n,a,b,c,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		room[a][b][c]=d+room[a][b][c];
	}
	
	for(int x=1;x<=4;x++){
		for(int y=1;y<=3;y++){
			for(int z=1;z<=10;z++){
				printf(" %d",room[x][y][z]);
			}
			printf("\n");
		}
		if(x!=4){
			printf("####################\n");
		}
	}
	return 0;
}