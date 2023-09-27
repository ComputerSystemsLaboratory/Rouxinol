#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = a ; i < b ; i ++)

int ans;
char maze[27][27];
void dfs(int x,int y){
	int dx[4] = {1,-1, 0, 0};
	int dy[4] = {0, 0, 1, -1};
	maze[x][y]='#';
	rep(i,4){
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if(maze[nx][ny]=='.'){
			ans++;
			dfs(nx,ny);
		}
	}
}

int main(void){
	int w,h;
	while(cin>>w>>h){
		rep(i,25)rep(j,25)
			maze[i][j]='#';
		ans=0;
		if(w==0&&h==0)return 0;
		rep(i,h)rep(j,w)
			cin>>maze[i][j];
		rep(i,h)rep(j,w){
			if(maze[i][j]=='@'){
				dfs(i,j);
				cout<<ans+1<<endl;
			}
		}
	}
}