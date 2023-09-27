#include <iostream>
#include <string>
using namespace std;

int H,W;
int dx[] = {-1,1,0,0},dy[] = {0,0,-1,1};
int v[110][110] = {{0}};
char G[110][110];

bool in(int x, int y){
	return 0<=x && x<=W && 0<=y && y<=H;
}
void dfs(int n,int m){
	v[n][m] = 1;
	char s = G[n][m];
	//cout << s << endl;
	for(int i=0;i<4;i++){
		int x = n+dx[i],y = m+dy[i];
		if(in(x,y) && v[x][y]!=1 && G[x][y]==s) dfs(x,y);
	}
}

int main(){
	while(cin >> H >> W && H>0){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin >> G[i][j];
			}
		}
		int ans = 0;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(v[i][j]!=1){
					dfs(i,j);
					ans++;
				}
			}
		}
		cout << ans << endl;
		for(int i=0;i<110;i++){
			for(int j=0;j<110;j++){
				v[i][j] = 0;
			}
		}
	}
}
