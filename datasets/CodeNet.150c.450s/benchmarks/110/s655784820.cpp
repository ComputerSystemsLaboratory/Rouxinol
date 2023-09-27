#include<iostream>
#include<cstdio>
#include<queue>
#include<utility>
#include<cstring>
using namespace std;
char map[1005][1005];
bool vis[1005][1005];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
int sx,sy;
int h,w;
int bfs(int n){
	memset(vis,false,sizeof(vis));
	queue<pair<pair<int,int>,int> >que;
	que.push(make_pair(make_pair(sx,sy),0));
	while(!que.empty()){
		pair<int,int>now=que.front().first;
		int cnt=que.front().second;
		que.pop();
		if(map[now.first][now.second]==n+48){
			sx=now.first;
			sy=now.second;
			return cnt;
		}
		for(int i=0;i<4;i++){
			int _x=now.first+dx[i];
			int _y=now.second+dy[i];
			if(_x<0||_y<0||_x>=h||_y>=w||map[_x][_y]=='X'||vis[_x][_y]){
				continue;
			}
			vis[_x][_y]=true;
			que.push(make_pair(make_pair(_x,_y),cnt+1));
		}
	}
}
int main(){
	int n;
	while(cin>>h>>w>>n){
		memset(map,0,sizeof(map));
		for(int i=0;i<h;i++){
			scanf("%s",map[i]);
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(map[i][j]=='S'){
					sx=i;
					sy=j;
					map[i][j]=='.';
					break;
				}
			}
		}
		int count=0;
		for(int k=1;k<=n;k++){
			count+=bfs(k);
		}
		cout<<count<<endl;
	}
	return 0;
}