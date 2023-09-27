#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int w,h;// =<20
	char map[20][20];
	int res[20][20]={};
	int result=0;
	int x,y;
	int start;// xxyy
	int stage;
	int check;
	int finish=0;
	
	scanf("%d%d",&w,&h);
	while(finish==0){
	for(y=0;y<h;y++){
		for(x=0;x<w;x++){
			cin >> map[x][y];
			if(map[x][y]=='@'){start=x*100+y;}
		}
	}
	
	x=start/100;
	y=start%100;
	res[x][y]=1;
	stage=1;
	check=1;
	while(check==1){
		check=0;
		for(y=0;y<h;y++){
			for(x=0;x<w;x++){
				if(res[x][y]==stage){
					if(x>0){
						if((map[x-1][y]=='.')&&(res[x-1][y]==0)){res[x-1][y]=stage+1;check=1;}
					}
					if(y>0){
						if((map[x][y-1]=='.')&&(res[x][y-1]==0)){res[x][y-1]=stage+1;check=1;}
					}
					if(x<w-1){
						if((map[x+1][y]=='.')&&(res[x+1][y]==0)){res[x+1][y]=stage+1;check=1;}
					}
					if(y<h-1){
						if((map[x][y+1]=='.')&&(res[x][y+1]==0)){res[x][y+1]=stage+1;check=1;}
					}
				}
			}
		}
		stage+=1;
	}

	result=0;
	for(y=0;y<h;y++){
		for(x=0;x<w;x++){
			if(res[x][y]!=0){result+=1;}
		}
	}
	cout << result << endl;

	for(y=0;y<h;y++){
		for(x=0;x<w;x++){
			map[x][y]=0;
			res[x][y]=0;
		}
	}

	scanf("%d%d",&w,&h);
	if((w==0)&&(h==0)){
		finish=1;
	}
	}
	return 0;
}