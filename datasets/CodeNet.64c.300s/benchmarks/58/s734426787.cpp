#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int h, w;
int a[4][2]= {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};//????????????????§???¨
char map[105][105];
int ans;
bool judge(int i, int j){
	if(i >= 0 && i < h && j >= 0 && j < w)
		return true;
	return false;
}
void dfs(int x, int y,char c){

		map[x][y] = 'x';
	int tempx, tempy;
	for(int i = 0; i < 4; i++){  //???????????????????´¢ 
		tempx = x + a[i][0];
		tempy = y + a[i][1];
		if(judge(tempx, tempy) && map[tempx][tempy] == c)
			dfs(tempx, tempy, c); 
	}

	return ;
}

int main(){
	while(scanf("%d %d", &h, &w) && h != 0 && w != 0){
		ans = 0;
		for(int i = 0; i < h; i++)
			scanf("%s", map[i]);
		for(int i = 0; i < h; i++)
			for(int j = 0; j < w; j++){
				if(map[i][j]=='@'||map[i][j]=='#'||map[i][j]=='*'){									
					dfs(i, j, map[i][j]);
					ans++;
				}
			}
		printf("%d\n", ans);
	}
	
	
	return 0;
} 