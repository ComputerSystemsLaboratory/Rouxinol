#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

struct OZAWA
{
	int x;
	int y;
	int c;
};
int Flag[1001][1001];
char MAP[1001][1001];
queue<OZAWA> Q;
OZAWA ba,v;
int main(void)
{
	int H,W,N,Nc=0,X[10],Y[10];
	int mv[4][2]={{0,-1},{1,0},{0,1},{-1,0}};
	char Cheese[10] ={'1','2','3','4','5','6','7','8','9'};
	memset(MAP,'X',sizeof(MAP));
	memset(Flag,0,sizeof(Flag));
	scanf("%d %d %d",&H,&W,&N);
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			//printf("%d %d ",i,j);
			cin >> MAP[i][j];
			//printf("Q");
			if(MAP[i][j] == 'S'){
				ba.x = j;
				ba.y = i;
				ba.c = 0;
				Flag[i][j] = 1;
				Q.push(ba);
				//printf("Sin\n");
			}
			for(int ii=0;ii<9;ii++){
				if(MAP[i][j] == Cheese[ii]){

					X[ii] = j;
					Y[ii] = i;
					//printf("\n@@@\n");
				}
			}
		}
	}
	//printf("S %d %d\n",ba.x,ba.y);
	//for(int ii=0;ii<2;ii++)
	//printf("%d %d\n",X[0],Y[0]);
	while(!Q.empty()){
		//printf("QA\n");
		ba = Q.front();
		Q.pop();
		if(ba.x==X[Nc] && ba.y==Y[Nc]){
			//printf("OZA");
			Nc++;
			memset(Flag,0,sizeof(Flag));
			while(!Q.empty()){
				Q.pop();
			}
			if(Nc == N) break;
			Q.push(ba);
			Flag[ba.y][ba.x] = 1;
		}
		//printf("aaa\n");
		//if(Nc == N) break;
		for(int i=0;i<4;i++){
			if(MAP[ba.y+mv[i][1]][ba.x+mv[i][0]]!='X' && Flag[ba.y+mv[i][1]][ba.x+mv[i][0]]==0 && (ba.x+mv[i][0])>=0&&(ba.x+mv[i][0])<W&&(ba.y+mv[i][1])>=0&&(ba.y+mv[i][1])<H){
				v.x=ba.x+mv[i][0];
				v.y=ba.y+mv[i][1];
				v.c=ba.c+1;
				Q.push(v);
				Flag[v.y][v.x] = 1;
				//printf("%d %d\n",v.x,v.y);
			}
		}
	}
	cout <<ba.c<<endl;
	return 0;
}