#include<iostream>
#include<algorithm>
using namespace std;
char ta[120][120];
bool used[120][120];
int h,w;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
int cnt;
void dfs(int y,int x,char now){
	//cout<<y<<" "<<x<<" "<<cnt<<" "<<now<<endl;
	used[y][x]=1;
	for(int i=0;i<4;i++){
		int ny=y+dy[i],nx=x+dx[i];
		if(ny>=0&&ny<h&&nx>=0&&nx<w&&ta[ny][nx]==now&&used[ny][nx]==0)dfs(ny,nx,now);
	}
}

int main(){
while(cin>>h>>w,h+w){
	for(int i=0;i<120;i++)fill(ta[i],ta[i]+120,' '),fill(used[i],used[i]+120,0);
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>ta[i][j];
	cnt=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(used[i][j]==0){
			dfs(i,j,ta[i][j]);
			cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
	return 0;
}