#include<stdio.h>
int h,w;
int map[50][50];
void func(int ,int);
int main(void){
	while(1){
		scanf("%d %d",&w,&h);
		if(h==0 && w==0){
			break;
		}
		int i,j;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				scanf("%d",&map[i][j]);
			}
		}
		/*for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				printf("%d ",map[i][j]);
			}
			printf("\n");
		}*/
		int cnt=0;
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(map[i][j]==1){
					map[i][j]=0;
					func(i,j);
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
		cnt=0;
	}
	return 0;
}
void func(int y,int x){
	int dy[8]={1,0,0,-1,-1,-1,1,1},dx[8]={0,1,-1,0,-1,1,-1,1};
	int i,j,xx,yy;
	for(i=0;i<8;i++){
		yy=y+dy[i];
		xx=x+dx[i];
		if(yy>=0 && yy<h && xx>=0 && xx<w && map[yy][xx]==1){
			map[yy][xx]=0;
			func(yy,xx);
		}
	}
}