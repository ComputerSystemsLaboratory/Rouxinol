#include<iostream>
#include<queue>
#include<climits>
#include<cstdlib>
using namespace std;
int d[1111][1111];
char input[1111][1111];
bool visited[1111][1111];
int H,W,N,S_x,S_y,answer=0;
const int dirx[]={0,-1,0,1};
const int diry[]={1,0,-1,0};
int now='1';
int D[11];
queue<int> q;
void BFS();
void clean();
int main(){
	int i,j;
	char ch; 
	cin>>H>>W>>N;
	for(i=0;i<H*W;i++){
		cin>>ch;
		input[i%W][i/W]=ch;
		d[i%W][i/W]=0;
		if(ch=='S'){
			S_x=i%W;S_y=i/W;
		}
	}
	while(now<=N+48){
		BFS();
		now++;
	}
	for(i=1;i<=N;i++){
		answer+=D[i];}
	cout<<answer<<endl;
}
void BFS(){
	int x,y,k,mx,my;
	q.push(S_x);
	q.push(S_y);
	visited[S_x][S_y]=true;
	while(!q.empty()){
		x=q.front();q.pop();
		y=q.front();q.pop();
		for(k=0;k<4;k++){
			mx=x+dirx[k];
			my=y+diry[k];
			if(mx<W&&mx>=0&&my<H&&my>=0){ 
			if(input[mx][my]!='X'&&!visited[mx][my]){
				q.push(mx);
				q.push(my);
				d[mx][my]=d[x][y]+1;
				if(input[mx][my]==(char)now){S_x=mx;S_y=my;D[now-48]=d[mx][my];}
				visited[mx][my]=true;
			}}
		}
	}
	clean();
}
void clean(){
	int i,j;
	for(i=0;i<W;i++)
		for(j=0;j<H;j++){
			visited[i][j]=false;
			d[i][j]=0;}
}