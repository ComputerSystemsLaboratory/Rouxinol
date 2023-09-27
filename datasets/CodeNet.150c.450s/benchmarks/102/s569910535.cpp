#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

#define INF 999999999

char map[20][21];
bool ch[20][20];
int ans;

void dfs(int w, int h, char map[20][21], bool c[20][20], int x, int y){
	//cout << x << " " << y << " " << ans << endl;
	ans++;
	c[x][y] = 1;
	if(x>0 && map[x-1][y]=='.' && c[x-1][y]==0){
		dfs(w,h,map,c,x-1,y);
	}
	if(x<h-1 && map[x+1][y]=='.' && c[x+1][y]==0){
		dfs(w,h,map,c,x+1,y);
	}
	if(y>0 && map[x][y-1]=='.' && c[x][y-1]==0){
		dfs(w,h,map,c,x,y-1);
	}
	if(y<w-1 && map[x][y+1]=='.' && c[x][y+1]==0){
		dfs(w,h,map,c,x,y+1);
	}
}

int main(){
	int i, j, w, h, x, y;
	while(1){
		cin >> w >> h;
		if(!w) break;
		for(i=0;i<h;i++){
			cin >> map[i];
			for(j=0;j<w;j++){
				ch[i][j] = 0;
				if(map[i][j] == '@'){
					x = i;
					y = j;
				}
			}
		}
		ans = 0;
		dfs(w,h,map,ch,x,y);
		
		cout << ans << endl;
	}
	return 0;
}