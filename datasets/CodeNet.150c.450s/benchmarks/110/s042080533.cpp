#include<cstdio>
#include<queue>
#include<iostream>
#include<cstring>
using namespace std;
int H,W,N;
char map[1001][1001];
int visit[1001][1001];
struct node{
	int x,y,ph,time;
}s;
void bfs(){
	queue<node>q;
	while(!q.empty())q.pop();
	q.push(s);
	int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0};
	while(!q.empty()){
		node ne=q.front();q.pop();
		for(int i=0;i<4;i++){
			node no;
			no.x=ne.x+dx[i];
			no.y=ne.y+dy[i];
			no.time=ne.time;
			no.ph=ne.ph;
			if(no.x>=0&&no.x<H&&no.y>=0&&no.y<W&&map[no.x][no.y]!='X'){
				no.time++;
				//printf("map[%d][%d],time=%d\n",no.x,no.y,no.time);				
				if((int)map[no.x][no.y]==s.ph+48){
					s.x=no.x;
					s.y=no.y;
					s.ph++;
					s.time=no.time;
					return ;					
				}
				if(map[no.x][no.y]=='.'){
					map[no.x][no.y]='X';
					visit[no.x][no.y]=1;
				}
				q.push(no);
			}
		}
	}
}
int main(void){
	while(scanf("%d",&H)!=EOF&&scanf("%d%d",&W,&N)){
		for(int i=0;i<H;i++)
		for(int j=0;j<W;j++){
			cin>>map[i][j];
			if(map[i][j]=='S'){
				s.x=i,s.y=j,s.ph=1,s.time=0;
			}
		}
		for(int i=0;i<N;i++){
			memset(visit,0,sizeof(visit));
			bfs();
				for(int i=0;i<H;i++)
				for(int j=0;j<W;j++)
				if(visit[i][j])map[i][j]='.';	
		}
		printf("%d\n",s.time);
	}
}