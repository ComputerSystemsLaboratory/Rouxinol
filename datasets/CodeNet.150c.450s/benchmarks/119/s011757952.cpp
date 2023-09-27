#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

int map[52][52];
bool ch[52][52];
int ans;

void dfs(int map[52][52], bool c[52][52], int x, int y){
	//cout << x << " " << y << " " << ans << endl;
	c[x][y] = 1;
	if(map[x-1][y]==1 && c[x-1][y]==0) dfs(map,c,x-1,y);
	if(map[x-1][y-1]==1 && c[x-1][y-1]==0) dfs(map,c,x-1,y-1);
	if(map[x-1][y+1]==1 && c[x-1][y+1]==0) dfs(map,c,x-1,y+1);
	if(map[x+1][y]==1 && c[x+1][y]==0) dfs(map,c,x+1,y);
	if(map[x+1][y-1]==1 && c[x+1][y-1]==0) dfs(map,c,x+1,y-1);
	if(map[x+1][y+1]==1 && c[x+1][y+1]==0) dfs(map,c,x+1,y+1);
	if(map[x][y-1]==1 && c[x][y-1]==0) dfs(map,c,x,y-1);
	if(map[x][y+1]==1 && c[x][y+1]==0) dfs(map,c,x,y+1);
}

int main(){
	int i, j, w, h;
	while(1){
		cin >> w >> h;
		if(!w) break;
		for(i=0;i<=h+1;i++){
			for(j=0;j<=w+1;j++){
				if(i==0||i==h+1||j==0||j==w+1)map[i][j]=0;
				else cin >> map[i][j];
				ch[i][j] = 0;
			}
		}
		ans = 0;
		for(i=1;i<=h;i++){
			for(j=1;j<=w;j++){
				if(map[i][j]&&!ch[i][j]){
					dfs(map,ch,i,j);
					ans++;
				}
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}