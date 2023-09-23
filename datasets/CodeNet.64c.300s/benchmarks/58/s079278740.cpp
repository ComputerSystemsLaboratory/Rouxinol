#include <iostream>
using namespace std;
typedef long long ll;
#define INF 2147483647

int w,h;
char a[102][102];
int dir[4][2] = {-1,0,1,0,0,-1,0,1};
int ans = 0;

void dfs(int x,int y,char s){
	if(x < 0 || x >= h || y < 0 || y >= w || a[x][y] != s) return;
	char t = a[x][y];
	a[x][y] = 'o';
	for(int i = 0;i < 4; i++){
		dfs(x+dir[i][0], y+dir[i][1], t);
	}
}

int main(){
	while(cin >> h >> w){
		if(w == 0 && h == 0) break;
		ans = 0;
		int sx,sy;
		for(int i = 0;i < h; i++){
			for(int j = 0;j < w; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0;i < h; i++){
			for(int j = 0;j < w; j++){
				if(a[i][j] != 'o'){
					ans++;
					dfs(i,j,a[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
} 