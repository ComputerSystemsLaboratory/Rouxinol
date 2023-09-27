#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
using namespace std;
#define INF 1000000
typedef pair<int,int> P;

int H,W,N,i,j,minute;
char field[1000][1000];
P factory[10];

int solve(int i){
	queue<P> s;
	P now;
	int dist[H][W];
	for(int k=0;k<H;k++){
		for(int j=0;j<W;j++){
			dist[k][j]=INF;
		}
	}
	int x[4]={1,0,-1,0},y[4]={0,1,0,-1};
	dist[factory[i].first][factory[i].second]=0;
	s.push(factory[i]);
	while(!s.empty()){
		now=s.front(); s.pop();
		if(now == factory[i+1]) break;
		for(int k=0;k<4;k++){
			int nx=now.first+x[k],ny=now.second+y[k];
			if(0<=nx && nx<H && 0<=ny && ny<W && field[nx][ny]!='X' && dist[nx][ny] == INF){
				s.push(P(nx,ny));
				dist[nx][ny] = dist[now.first][now.second]+1;
			}
		}
	}
	return dist[now.first][now.second];
}

int main(){
	cin>>H>>W>>N;
	for(i=0;i<H;i++){
		for(j=0;j<W;j++){
			cin>>field[i][j];
			if(1<=field[i][j]-'0' && field[i][j]-'0'<=N){factory[field[i][j]-'0']=P(i,j);}
			if(field[i][j]=='S'){factory[0]=P(i,j);}
		}
	}
	for(i=0;i<N;i++){
		minute+=solve(i);//i??????????????????????£?????????¢?´¢
	}
	cout<<minute<<endl;
	return 0;
}