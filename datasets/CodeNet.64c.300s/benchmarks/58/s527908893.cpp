#include<stdio.h>
#include<string.h>
#include<functional>
#include<algorithm>
char map[101][101];
int ii,jj;
int h,w;
char temp[2];
void func(int ,int);
using namespace std;
int main(void){
	while(1){
		scanf("%d %d",&h,&w);
		if(h==0 && w==0){
			break;
		}
		int i,j,cnt=0;
		for(i=0;i<h;i++){
			scanf("%s",map[i]);
		}
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				if(map[i][j]=='#' || map[i][j]=='*' || map[i][j]=='@'){
					temp[0]=map[i][j];
					map[i][j]='o';
					func(i,j);
					cnt++;
				}
			}/*
			for(j=0;j<h;j++){
				printf("%s\n",map[j]);
			}
			printf("\n");*/
		}
		printf("%d\n",cnt);
	}
}
void func(int y,int x){
	int dy[4]={0,1,-1,0},dx[4]={1,0,0,-1};
	int yy,xx;
	int i;
	for(i=0;i<4;i++){
		yy=y+dy[i];
		xx=x+dx[i];
		if(map[yy][xx]==temp[0] && yy>=0 && yy<h && xx<w && xx>=0){
			map[yy][xx]='o';
			func(yy,xx);
		}
	}
}